#pragma once

#ifndef _H_NODE__
#define _H_NODE__

class Node {
public:
  Node(int, Node*);
  ~Node();

  int m_data;
  Node* m_next;
};

#endif // _H_NODE__
