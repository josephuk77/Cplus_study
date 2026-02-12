cmake_minimum_required(VERSION 3.24)
project(Cplus_study)

set(CMAKE_CXX_STANDARD 17)

add_executable(ch01_hello_world ch01_orientation/HelloWorld.cpp)
add_executable(ch02_int         ch02_data_types/int.cpp)
add_executable(ch02_floating    ch02_data_types/FloatingPoint.cpp)