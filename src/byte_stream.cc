#include "byte_stream.hh"

using namespace std;

ByteStream::ByteStream( uint64_t capacity ) : capacity_( capacity ) {}

bool Writer::is_closed() const
{
  // Your code here.
  return {};
}
 
void Writer::push( string data )
{
  // Your code here.
  (void)data;
  return;
}

void Writer::close()
{
  // Your code here.
}

uint64_t Writer::available_capacity() const
{
  // Your code here.
  return {};
}

uint64_t Writer::bytes_pushed() const
{
  // Your code here.
  return {};
}

bool Reader::is_finished() const
{
  // Your code here.
  return {};
}

uint64_t Reader::bytes_popped() const
{
  // Your code here.
  return {};
}

string_view Reader::peek() const
{
  // Your code here.
  return {};
}

void Reader::pop( uint64_t len )
{
  // Your code here.
  //(void)len;
  for(uint64_t i = len; i>0 ;i--){
    //buffer_.pop_front();
    }
}

uint64_t Reader::bytes_buffered() const
{
  // Your code here.
  // If buffer is not empty, return True.
  return {};
}
