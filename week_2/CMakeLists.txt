cmake_minimum_required(VERSION 3.6)
project(find_lower_key)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp "big lake.cpp")
add_executable(find_lower_key ${SOURCE_FILES})