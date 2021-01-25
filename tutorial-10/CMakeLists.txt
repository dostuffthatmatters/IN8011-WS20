cmake_minimum_required(VERSION 3.13)
project(tutorial_10 C)

set(CMAKE_C_STANDARD 99)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(boilerplate
        exercises/tree/tree.c
        exercises/boilerplate/main.c)

add_executable(solution
       exercises/tree/tree.c
       exercises/solution/main.c)
