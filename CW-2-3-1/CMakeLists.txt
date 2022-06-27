cmake_minimum_required(VERSION 3.20)
project(murzin_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(murzin_cpp
        Node.cpp
        Node.h
        Graph.cpp
        Graph.h
        LinkedListQueue.h
        LinkedListQueue.cpp
        LinkedListStack.h
        LinkedListStack.cpp
        main.cpp)