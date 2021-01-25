cmake_minimum_required(VERSION 3.13)
project(tutorial_11 C)

set(CMAKE_C_STANDARD 99)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(
        bubble_sort_boilerplate
        exercises/boilerplate/bubble_sort.c
)
add_executable(
        merge_sort_boilerplate
        exercises/boilerplate/merge_sort.c
)
add_executable(
        binary_search_boilerplate
        exercises/boilerplate/binary_search.c
)

# add_executable(
#         bubble_sort_solution
#         exercises/solution/bubble_sort.c
# )
# add_executable(
#         merge_sort_solution
#         exercises/solution/merge_sort.c
# )
# add_executable(
#         binary_search_solution
#         exercises/solution/binary_search.c
# )
