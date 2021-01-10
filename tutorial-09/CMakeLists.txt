make_minimum_required(VERSION 3.13)
project(tutorials C)

set(CMAKE_C_STANDARD 99)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(list_boilerplate
        exercises/list_boilerplate/list.c)
        exercises/list_boilerplate/main.c)

add_executable(list_solution
        exercises/list_solution/list.c)
        exercises/list_solution/main.c)

