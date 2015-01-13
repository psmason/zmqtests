#include <zmq.h>
#include <string>
#include <iostream>
#include <assert.h>
#include <mysvcmessages.pb.h>

namespace {
  const std::string ZMQ_ADRRESS = "tcp://*:5555";
  const size_t BUFFER_SIZE = 10000;
} // close anonymous

int main()
{
  std::cout << "Setting up server on " << ZMQ_ADRRESS.c_str() << std::endl;

  void *context   = zmq_ctx_new();
  void *responder = zmq_socket(context, ZMQ_REP);
  assert(0 == zmq_bind(responder, ZMQ_ADRRESS.c_str()));

  while (true) {
    char buffer[BUFFER_SIZE];
    const int bytesRead = zmq_recv(responder, buffer, BUFFER_SIZE, 0);
    assert(bytesRead > 0);
    std::cout << "Received request" << std::endl;

    typedef tutorial::MySvcMessage Message;
    Message message;
    assert(message.ParseFromArray(&buffer, bytesRead));

    std::cout << "Parsed request: " << message.DebugString() << std::endl;

    typedef tutorial::TestResponse TestResponse;
    Message response;
    TestResponse *testResponse = response.mutable_testresponse();
    testResponse->set_msg("my response...");
    const int byteSize = response.ByteSize();
    assert(response.SerializeToArray(&buffer, byteSize));
    zmq_send(responder, buffer, byteSize, 0);
  }

  return 0;
}













