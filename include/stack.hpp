#pragma once

#ifndef _H_STACK__
#define _H_STACK__

// #include <memory> // TODO reimplement with unique_ptr
#include "node.hpp"

class Stack {
public:
  Stack();
  ~Stack();

  int pop();
  void push(int);
  int len() { return m_size; }

private:
  Node* m_head;
  int m_size;
};

#endif // _H_STACK__