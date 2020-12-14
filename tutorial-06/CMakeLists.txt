cmake_minimum_required(VERSION 3.16)
project(tutorial_06 C)

set(CMAKE_C_STANDARD 99)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(example_6_1 examples/example_6_1_shared_functions/main.c examples/example_6_1_shared_functions/print_matrices.c)
add_executable(example_6_2 examples/example_6_2_shared_variables/main.c examples/example_6_2_shared_variables/my_vars.c)
add_executable(example_6_3 examples/example_6_3_static_1.c)
add_executable(example_6_4 examples/example_6_4_static_2.c)
