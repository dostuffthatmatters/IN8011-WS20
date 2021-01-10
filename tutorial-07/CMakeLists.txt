cmake_minimum_required(VERSION 3.16)
project(tutorial_07 C)

set(CMAKE_C_STANDARD 99)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(
    example_7_1
    examples/example_7_1_ho_map_function.c
)
add_executable(
    example_7_2
    examples/example_7_2_ho_filter_function.c
)
add_executable(
    example_7_3
    examples/example_7_3_pointer_intro.c
)
add_executable(
    example_7_4
    examples/example_7_4_passing_by_value.c
)
add_executable(
    example_7_5
    examples/example_7_5_passing_by_reference.c
)
add_executable(
    example_7_6
    examples/example_7_6_array.c
)
add_executable(
    example_7_7
    examples/example_7_7_array_index_access.c
)
add_executable(
    example_7_8
    examples/example_7_8_array_pointer_access.c
)


add_executable(
    stack_boilerplate
    exercises/stack_boilerplate/stack.c
    exercises/stack_boilerplate/main.c
)
add_executable(
    stack_solution
    exercises/stack_solution/stack.c
    exercises/stack_solution/main.c
)
add_executable(
        stack_boilerplate_correction
        exercises/stack_boilerplate/stack.c
        exercises/stack_solution/main_correction.c
)
add_executable(
        stack_solution_correction
        exercises/stack_solution/stack.c
        exercises/stack_solution/main_correction.c
)