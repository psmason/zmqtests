#include <zmq.h>
#include <iostream>
#include <assert.h>
#include <mysvcmessages.pb.h>
#include <sstream>

namespace {
  const std::string ZMQ_ADRRESS = "tcp://localhost:5555";
  const size_t BUFFER_SIZE = 10000;
} // close anonymous

int main()
{
  std::cout << "Connecting to the hello world server..." << std::endl;
  void *context   = zmq_ctx_new();
  void *requester = zmq_socket(context, ZMQ_REQ);
  assert(0 == zmq_connect(requester, ZMQ_ADRRESS.c_str()));

  char buffer[BUFFER_SIZE];

  typedef tutorial::MySvcMessage Message;
  typedef tutorial::TestRequest  TestRequest;

  Message message;
  TestRequest *request = message.mutable_testrequest();
  request->set_msg("hello, world");

  std::ostringstream oss;
  message.SerializeToOstream(&oss);
  const int byteSize = message.ByteSize();
  assert(message.SerializeToArray(&buffer, byteSize));

  zmq_send(requester, buffer, byteSize, 0);
  zmq_send(requester, buffer, BUFFER_SIZE, 0);
  
  zmq_close(requester);
  zmq_ctx_destroy(context); 
  return 0;
}










