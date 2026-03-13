cmake_minimum_required(VERSION 3.10)

project(Lab2_Project C)

set(CMAKE_C_STANDARD 11)
add_compile_options(-Wall -Wextra -g)

add_executable(main
    src/main.c
    src/math_utils.c
)

target_include_directories(main PUBLIC include)
