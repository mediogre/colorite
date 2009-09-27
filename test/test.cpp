#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtest/gtest.h>
#include <colorer/viewer/ConsoleTools.h>
#include "sha1.h"
#include "sqlite3.h"

class MemoryWriter : public Writer {
public:
    MemoryWriter(int encoding = -1, bool useBOM = true) : cursor(0) {
	if (encoding == -1) 
	    encoding = Encodings::getDefaultEncodingIndex();
	encodingIndex = encoding;
	this->useBOM = useBOM;
	writeBOM();
    }

    void writeBOM() {
	if (useBOM && Encodings::isMultibyteEncoding(encodingIndex)) write(0xFEFF);
    }

    void write(wchar c) {
	byte buf[8];
	int bufLen = Encodings::toBytes(encodingIndex, c, buf);
	for(int pos = 0; pos < bufLen; pos++)
	    memory_putc(buf[pos]);
    }

    const byte* buffer_ptr() const {
	return buffer;
    } 

    int buffer_len() const {
	return cursor;
    }

    void clear() {
	cursor = 0;
    }
private:
    void memory_putc(byte c) {
	buffer[cursor++] = c;
    }

    byte buffer[1024*1024];
    int cursor;
    int encodingIndex;
    bool useBOM;
};

TEST(Integration, MatchOutput) 
{
    sqlite3 *db;
    EXPECT_EQ(SQLITE_OK, sqlite3_open("hrc/hrc_test.db", &db));

    const char query[] = "select id, name, sha1 from items";

    sqlite3_stmt *stmt;
    EXPECT_EQ(SQLITE_OK, sqlite3_prepare(db, query, strlen(query), &stmt, 0));

    ConsoleTools ct;
    ct.setCatalogPath(DString("../data/catalog.xml"));
    ct.setCopyrightHeader(false);
    ct.setHtmlWrapping(false);
    ct.addLineNumbers(true);

    MemoryWriter wr;

    for (;;)
    {
	int result = sqlite3_step(stmt);
	if (result == SQLITE_ROW)
	{
	    int id                        = sqlite3_column_int (stmt, 0);
	    const unsigned char *filename = sqlite3_column_text(stmt, 1);
	    const unsigned char *sha1     = sqlite3_column_text(stmt, 2);

	    char filename_buffer[260];
	    sprintf(filename_buffer, "hrc/%s", filename);

	    printf("%d: %s\n", id, filename_buffer);
	    {
		ct.setInputFileName(DString(filename_buffer));
		wr.clear();
		ct.genOutput(true, &wr);

		moz_SHA_CTX ctx;
		moz_SHA1_Init(&ctx);
		moz_SHA1_Update(&ctx, wr.buffer_ptr(), wr.buffer_len());

		unsigned char hash[20];
		moz_SHA1_Final(hash, &ctx);

		char hex_hash[41];
		for (int i = 0; i < 20; i++)
		{
		    sprintf(hex_hash + i * 2, "%02x", hash[i]);
		}

		EXPECT_EQ(0, strcmp((const char *)sha1, hex_hash));
	    }
	}
	else
	{
	    break;
	}
    }

    sqlite3_finalize(stmt);
    sqlite3_close(db);
}

