cmake_minimum_required(VERSION 3.16)
project(tutorial_02 C)

set(CMAKE_C_STANDARD 99)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(example_2_1 examples/example_2_1_boolean.c)
add_executable(example_2_2 examples/example_2_2_overflow.c)
add_executable(example_2_3 examples/example_2_3_integer_division.c)
add_executable(example_2_4 examples/example_2_4_division_remainder.c)
