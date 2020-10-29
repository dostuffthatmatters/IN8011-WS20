
cmake_minimum_required(VERSION 3.16)
project(tutorial_01 C)

set(CMAKE_C_STANDARD 99)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(example_1_1 examples/example_01_hello_world.c)
add_executable(example_1_2 examples/example_02_hello_math.c)
