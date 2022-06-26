cmake_minimum_required(VERSION 3.20)
project(murzin_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(../CW-2-4-1)

add_executable(CW-2-4-1
        LinkedList.cpp
        LinkedList.h
        DoubleLinkedList.cpp
        DoubleLinkedList.h
        main.cpp)