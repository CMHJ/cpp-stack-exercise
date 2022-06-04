#include "node.hpp"

Node::Node(const int &data, std::unique_ptr<Node> next)
    : m_data(data), m_next(std::move(next)) {}

Node::~Node() {}