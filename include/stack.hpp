#pragma once

#ifndef _H_STACK__
#define _H_STACK__

#include <memory>

#include "node.hpp"

class Stack {
public:
  Stack();
  ~Stack();

  int pop();
  void push(const int &);
  int len() { return m_size; }

private:
  std::unique_ptr<Node> m_head;
  int m_size;
};

#endif // _H_STACK__