/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_sf_colorer_impl_BaseEditorNative */

#ifndef _Included_net_sf_colorer_impl_BaseEditorNative
#define _Included_net_sf_colorer_impl_BaseEditorNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    init
 * Signature: (Lnet/sf/colorer/ParserFactory;Lnet/sf/colorer/LineSource;)J
 */
JNIEXPORT jlong JNICALL Java_net_sf_colorer_impl_BaseEditorNative_init
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_finalize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    setRegionCompact
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_setRegionCompact
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    setRegionMapper
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_setRegionMapper
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    addRegionHandler
 * Signature: (JLnet/sf/colorer/RegionHandler;Lnet/sf/colorer/Region;)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_addRegionHandler
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    removeRegionHandler
 * Signature: (JLnet/sf/colorer/RegionHandler;)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_removeRegionHandler
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    setFileType
 * Signature: (JLnet/sf/colorer/FileType;)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_setFileType
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    getFileType
 * Signature: (J)Lnet/sf/colorer/FileType;
 */
JNIEXPORT jobject JNICALL Java_net_sf_colorer_impl_BaseEditorNative_getFileType
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    chooseFileType
 * Signature: (JLjava/lang/String;)Lnet/sf/colorer/FileType;
 */
JNIEXPORT jobject JNICALL Java_net_sf_colorer_impl_BaseEditorNative_chooseFileType
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    setBackParse
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_setBackParse
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    getBackground
 * Signature: (J)Lnet/sf/colorer/handlers/RegionDefine;
 */
JNIEXPORT jobject JNICALL Java_net_sf_colorer_impl_BaseEditorNative_getBackground
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    getVertCross
 * Signature: (J)Lnet/sf/colorer/handlers/RegionDefine;
 */
JNIEXPORT jobject JNICALL Java_net_sf_colorer_impl_BaseEditorNative_getVertCross
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    getHorzCross
 * Signature: (J)Lnet/sf/colorer/handlers/RegionDefine;
 */
JNIEXPORT jobject JNICALL Java_net_sf_colorer_impl_BaseEditorNative_getHorzCross
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    getLineRegions
 * Signature: (JI)[Lnet/sf/colorer/handlers/LineRegion;
 */
JNIEXPORT jobjectArray JNICALL Java_net_sf_colorer_impl_BaseEditorNative_getLineRegions
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    validate
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_validate
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    idleJob
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_idleJob
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    modifyEvent
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_modifyEvent
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    modifyLineEvent
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_modifyLineEvent
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    visibleTextEvent
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_visibleTextEvent
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     net_sf_colorer_impl_BaseEditorNative
 * Method:    lineCountEvent
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_sf_colorer_impl_BaseEditorNative_lineCountEvent
  (JNIEnv *, jobject, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
