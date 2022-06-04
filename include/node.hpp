#pragma once

#ifndef _H_NODE__
#define _H_NODE__

#include <memory>

template <typename T> class Node {
public:
  Node(T, std::unique_ptr<Node>);
  ~Node();

  T m_data;
  std::unique_ptr<Node> m_next;
};

template <typename T>
Node<T>::Node(T data, std::unique_ptr<Node> next)
    : m_data(data), m_next(std::move(next)) {}

template <typename T> Node<T>::~Node() {}

#endif // _H_NODE__
