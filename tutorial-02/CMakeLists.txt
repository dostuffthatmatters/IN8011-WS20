cmake_minimum_required(VERSION 3.16)
project(tutorial_02 C)

set(CMAKE_C_STANDARD 99)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(example_2_1 examples/example_2_1_boolean.c)
add_executable(example_2_2 examples/example_2_2_overflow.c)
add_executable(example_2_3 examples/example_2_3_integer_division.c)
add_executable(example_2_4 examples/example_2_4_division_remainder.c)

add_executable(exercise_2_3 exercises/exercise_2_3_random.c)
add_executable(exercise_2_4_b exercises/exercise_2_4_b.c)
add_executable(exercise_2_4_d exercises/exercise_2_4_d.c)
add_executable(exercise_2_4_e exercises/exercise_2_4_e.c)
add_executable(exercise_2_4_f exercises/exercise_2_4_f.c)
add_executable(exercise_2_5 exercises/exercise_2_5_fizzbuzz.c)
