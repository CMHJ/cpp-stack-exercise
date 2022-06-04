cmake_minimum_required(VERSION 3.0.0)
project(cpp-stack-exercise VERSION 0.1.0)

set(CXX_STANDARD_REQUIRED 11)
add_compile_options(
  -Wall
  -Wextra
  -Wpedantic
)

add_library(stack
  src/stack.cpp
  src/node.cpp
)
target_include_directories(stack PRIVATE
  include
)
set(PROJECT_LIBS stack)

add_executable(cpp-stack-exercise
  src/cpp-stack-exercise.cpp
)
target_include_directories(cpp-stack-exercise PRIVATE
  include
)
target_link_libraries(cpp-stack-exercise PRIVATE
  stack
)

# Enable tests
include(CTest)
enable_testing()
add_subdirectory(tests)
# Automatically runs tests with valgrind
add_custom_target(test_memcheck
    COMMAND ${CMAKE_CTEST_COMMAND}
        --force-new-ctest-process --test-action memcheck
    COMMAND cat "${CMAKE_BINARY_DIR}/Testing/Temporary/MemoryChecker.*.log"
    WORKING_DIRECTORY "${CMAKE_BINARY_DIR}")

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
