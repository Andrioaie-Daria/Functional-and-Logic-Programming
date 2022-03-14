cmake_minimum_required(VERSION 3.19)
project(R1_model)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(R1_model
        lista.cpp
        lista.h
        main.cpp)
