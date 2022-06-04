# Cpp stack exercise

A simple cpp exercise where a list/stack was implemented.

This was primarily to learn so more modern concepts such as:

- Slightly more advanced CMake configurations
- Testing in C/Cpp with CMake
- Testing in CMake with Valgrind
- Smart pointers
- Move semantics i.e. std::move
- Class Templating

Note: the binary target included is just for example and serves no purpose.

# Building

Run the following commands below to build.
Note: The Unix Makefiles generator is specified in case CMake defaults to another build system.

```sh
mkdir build
cd build
cmake -G"Unix Makefiles" ..
make
```

# Testing

Run the commands below to test the code in the project.
There is a custom CMake target called "test_memcheck" which will run CTest with Valgrind.

```sh
cd build
ctest # Plain testing
make test_memcheck # Testing with Valgrind
```
