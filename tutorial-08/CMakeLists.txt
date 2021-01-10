cmake_minimum_required(VERSION 3.13)
project(tutorials C)

set(CMAKE_C_STANDARD 99)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(example_8_1 examples/example_8_1_static_vs_dynamic_allocation.c)
add_executable(example_8_2 examples/example_8_2_dynamic_allocation_malloc.c)
add_executable(example_8_3 examples/example_8_3_dynamic_allocation_calloc.c)
add_executable(example_8_4 examples/example_8_4_factorial_loop.c)
add_executable(example_8_5 examples/example_8_5_factorial_recursion.c)

# add_executable(exercise_8_1_a exercises/exercise_8_1_a_basic.c)
# add_executable(exercise_8_1_b exercises/exercise_8_1_b_advanced.c)
