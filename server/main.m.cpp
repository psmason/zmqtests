#include <zmq.h>
#include <string>
#include <iostream>
#include <assert.h>

namespace {
  const std::string ZMQ_ADRRESS = "tcp://*:5555";
} // close anonymous

int main()
{
  std::cout << "Setting up server on " << ZMQ_ADRRESS.c_str() << std::endl;

  void *context   = zmq_ctx_new();
  void *responder = zmq_socket(context, ZMQ_REP);
  assert(0 == zmq_bind(responder, ZMQ_ADRRESS.c_str()));

  while (true) {
    char buffer[10];
    zmq_recv(responder, buffer, 10, 0);
    std::cout << "Received request" << std::endl;
    
    const std::string response = "world";
    zmq_send(responder, response.c_str(), response.length(), 0);
  }

  return 0;
}
