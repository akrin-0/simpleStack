cmake_minimum_required(VERSION 3.26)
project(simpleStack)

set(CMAKE_CXX_STANDARD 23)

add_executable(simpleStack main.cpp
        simpleStack.h)

target_link_libraries(simpleStack pthread)
