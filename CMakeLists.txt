cmake_minimum_required(VERSION 3.5)
project(NumericCalculus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp NumericCalculus.cpp NumericCalculus.h)
add_executable(NumericCalculus ${SOURCE_FILES})