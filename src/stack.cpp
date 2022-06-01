#include "stack.hpp"

Stack::Stack() : m_head(nullptr), m_size(0) {}

Stack::~Stack() {
  // Clean up all nodes
  while (m_size > 0) {
    this->pop();
  }
}

void Stack::push(int data) {
  // If head is null set next ptr to null
  if (m_head == nullptr) {
    m_head = new Node(data, nullptr);
    m_size++;
    return;
  }

  // Else set next to previous head
  Node *old_head = m_head;
  m_head = new Node(data, old_head);
  m_size++;
}

int Stack::pop() {
  // Get old head and store data for return
  Node *old_head = m_head;
  int data = old_head->m_data;

  // Update head to next node and delete old node
  m_head = old_head->m_next;
  delete old_head;
  m_size--;

  return data;
}
