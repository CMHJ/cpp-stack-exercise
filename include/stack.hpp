#pragma once

#ifndef _H_STACK__
#define _H_STACK__

#include <memory>

#include "node.hpp"

template <typename T> class Stack {
public:
  Stack();
  ~Stack();

  T pop();
  void push(T);
  int len() { return m_size; }

private:
  std::unique_ptr<Node<T>> m_head = nullptr;
  int m_size = 0;
};

template <typename T> Stack<T>::Stack() {}

template <typename T> Stack<T>::~Stack() {
  // Clean up all nodes
  while (m_size > 0) {
    this->pop();
  }
}

template <typename T> void Stack<T>::push(T data) {
  if (m_head == nullptr) {
    // If head is null set next ptr to null
    m_head = std::make_unique<Node<T>>(data, nullptr);
  } else {
    // Else set new head next ptr to previous head
    m_head = std::make_unique<Node<T>>(data, std::move(m_head));
  }

  // Increment list size
  m_size++;
}

template <typename T> T Stack<T>::pop() {
  // Remove old head and update Stack head
  std::unique_ptr<Node<T>> old_head = std::move(m_head);
  m_head = std::move(old_head->m_next);
  m_size--;

  // Return popped value
  return old_head->m_data;
}

#endif // _H_STACK__