cmake_minimum_required(VERSION 3.13)
project(Extern_C)

set(CMAKE_CXX_STANDARD 14)

add_executable(Extern_C main.cpp math.c math.h other.c)