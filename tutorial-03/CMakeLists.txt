cmake_minimum_required(VERSION 3.16)
project(tutorial_03 C)

set(CMAKE_C_STANDARD 99)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(example_3_1 examples/example_3_1_exit_code.c)
add_executable(example_3_2 examples/example_3_2_char_array.c)
add_executable(example_3_3 examples/example_3_3_basic_IO_really_unsafe.c)
add_executable(example_3_4 examples/example_3_4_basic_IO_unsafe.c)
add_executable(example_3_5 examples/example_3_5_basic_IO_safe.c)
add_executable(example_3_6 examples/example_3_6_atoi.c)
add_executable(example_3_7 examples/example_3_7_for_loop.c)
add_executable(example_3_8 examples/example_3_8_switch.c)

add_executable(exercise_3_1_c exercises/exercise_3_1_c.c)
add_executable(exercise_3_2_a_v1 exercises/exercise_3_2_a_v1.c)
add_executable(exercise_3_2_a_v2 exercises/exercise_3_2_a_v2.c)
add_executable(exercise_3_2_b_v1 exercises/exercise_3_2_b_v1.c)
add_executable(exercise_3_2_b_v2 exercises/exercise_3_2_b_v2.c)
add_executable(exercise_3_2_c exercises/exercise_3_2_c.c)

