cmake_minimum_required(VERSION 3.23)
project(clox C)

set(CMAKE_C_STANDARD 99)

add_executable(clox clox.c common.h chunk.c chunk.h memory.c memory.h debug.h debug.c)
