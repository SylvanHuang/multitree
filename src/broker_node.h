#ifndef BROKER_NODE_H_
#define BROKER_NODE_H_

class BrokerNode {
 public:
  BrokerNode();

  ~BrokerNode();

  // Callback from async I/O module on establishing a new connection.
  void outgoing(const std::string &host, int port);
 
  // Callback from async I/O module on receiving a message.
  void deliver(uint8_t *data, int size,
      std::function<void(void *)> release, void *arg);

 private:
  
};

#endif  // BROKER_NODE_H_
