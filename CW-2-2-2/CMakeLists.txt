cmake_minimum_required(VERSION 3.20)
project(murzin_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CW-2-2-2
        LinkedListStack.h
        LinkedListStack.cpp
        Node.cpp
        Node.h
        main.cpp)
