cmake_minimum_required(VERSION 3.6)
project(helloworld)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(helloworld ${SOURCE_FILES})