#include <cstdlib>
#include <stdio.h>

#include "stack.hpp"

void assert(const bool expression, const char *message) {
  if (!expression) {
    fprintf(stderr, "%s\n", message);
    exit(EXIT_FAILURE);
  }
}

int main(void) {
  Stack *stack = new Stack();
  stack->push(1);
  stack->push(2);
  stack->push(3);

  assert(stack->pop() == 3, "Error: Data does not equal 3");
  assert(stack->pop() == 2, "Error: Data does not equal 3");
  assert(stack->pop() == 1, "Error: Data does not equal 3");

  delete stack;

  return EXIT_SUCCESS;
}