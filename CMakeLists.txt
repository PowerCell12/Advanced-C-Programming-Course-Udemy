cmake_minimum_required(VERSION 4.0)
project(C_Projects C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Projects main.c
)
target_link_libraries(C_Projects m)
