cmake_minimum_required(VERSION 3.27)
project(k65)

set(CMAKE_CXX_STANDARD 17)

add_executable(k65 main.cpp
        Vehicle.cpp
)
