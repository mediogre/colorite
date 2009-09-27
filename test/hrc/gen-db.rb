require 'rubygems'
require 'dm-core'
require 'digest/sha1'

DataMapper.setup(:default, :database => 'resource_server_dev', :adapter =>  'sqlite3', :database => 'hrc_test.db')

class Item
  include DataMapper::Resource

  property :id, Serial

  property :name, String
  property :output, Text
  property :sha1, String
end

DataMapper.auto_migrate!

Dir["_valid/**/*.html"].each_with_index {|html_file, i|
  source_file = html_file.match(%r{^_valid/(.*?)\.html$})[1]
  html = File.open(html_file, "rb") {|f| f.read}
  sha1        = Digest::SHA1.hexdigest(html)

  Item.create :name => source_file, :output => html, :sha1 => sha1
  puts "#{i}: #{sha1} #{html_file} - #{source_file} - #{File.exists?(source_file)}"
}
