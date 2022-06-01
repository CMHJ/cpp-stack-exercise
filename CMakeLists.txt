cmake_minimum_required(VERSION 3.0.0)
project(cpp-stack-exercise VERSION 0.1.0)

set(CXX_STANDARD_REQUIRED 14)
add_compile_options(
  -Wall
  -Wextra
  -Wpedantic
)


add_executable(cpp-stack-exercise
  src/main.cpp
)

# Enable tests
include(CTest)
enable_testing()
add_subdirectory(tests)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
