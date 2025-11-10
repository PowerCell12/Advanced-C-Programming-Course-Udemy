cmake_minimum_required(VERSION 3.20)
project(C_Projects C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Projects main.c
        "Working with Larger Programs Exercises/Geometry Exercise/geometry.h"
        "Working with Larger Programs Exercises/Geometry Exercise/geometry.c"
        "Working with Larger Programs Exercises/Calculator/Operations/operations.h"
        "Working with Larger Programs Exercises/Calculator/Operations/operations.c"
        "Working with Larger Programs Exercises/Calculator/Advanced/advanced.h"
        "Working with Larger Programs Exercises/Calculator/Advanced/advanced.c"
        "Storage Classes/declaringVariables.c"
        "Storage Classes/sum.c"
        "Storage Classes/loop.c"
        "Storage Classes/display.c"
        "Advanced Data Types/Variable Length Arrays.c"
        "Advanced Data Types/Flexible Array Members.c"
        "Advanced Data Types/Complex number types.c")

target_include_directories(C_Projects PRIVATE
        "Working with Larger Programs Exercises/Calculator/Advanced"
        "Working with Larger Programs Exercises/Calculator/Operations"
        "Working with Larger Programs Exercises/Geometry Exercise")

target_link_libraries(C_Projects m)