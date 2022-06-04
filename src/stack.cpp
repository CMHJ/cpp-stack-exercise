#include "stack.hpp"

Stack::Stack() : m_head(nullptr), m_size(0) {}

Stack::~Stack() {
  // Clean up all nodes
  while (m_size > 0) {
    this->pop();
  }
}

void Stack::push(const int &data) {
  if (m_head == nullptr) {
    // If head is null set next ptr to null
    m_head = std::make_unique<Node>(data, nullptr);
  } else {
    // Else set new head next ptr to previous head
    m_head = std::make_unique<Node>(data, std::move(m_head));
  }

  // Increment list size
  m_size++;
}

int Stack::pop() {
  // Remove old head and update Stack head
  std::unique_ptr<Node> old_head = std::move(m_head);
  m_head = std::move(old_head->m_next);
  m_size--;

  // Return popped value
  return old_head->m_data;
}
