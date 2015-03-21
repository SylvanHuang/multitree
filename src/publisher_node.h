#ifndef PUBLISHER_NODE_H_
#define PUBLISHER_NODE_H_

struct Endpoint {
  std::string host;
  int port;
};

struct TreeNeighbors {
  Endpoint parent;
  std::vector<Endpoint> children;
};

class PublisherNode {
 public:
  PublisherNode();

  ~PublisherNode();

  // Callback from async I/O module on establishing a new connection.
  void outgoing(const std::string &host, int port);
 
  // Callback from async I/O module on receiving a message.
  void deliver(uint8_t *data, int size,
      std::function<void(void *)> release, void *arg);

 private:
  
};

#endif  // PUBLISHER_NODE_H_
