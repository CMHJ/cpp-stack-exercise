#pragma once

#ifndef _H_NODE__
#define _H_NODE__

#include <memory>

class Node {
public:
  Node(const int &, std::unique_ptr<Node>);
  ~Node();

  int m_data;
  std::unique_ptr<Node> m_next;
};

#endif // _H_NODE__
