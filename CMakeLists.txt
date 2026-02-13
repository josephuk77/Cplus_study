cmake_minimum_required(VERSION 3.24)
project(Cplus_study)

set(CMAKE_CXX_STANDARD 17)

add_executable(ch01_hello_world ch01_orientation/HelloWorld.cpp)
add_executable(ch02_int ch02_data_types/Integer.cpp)
add_executable(ch02_floating    ch02_data_types/FloatingPoint.cpp)
add_executable(ch02_char        ch02_data_types/Character.cpp)
add_executable(ch02_bool ch02_data_types/Boolean.cpp)
add_executable(ch03_io ch03_io/Printf.cpp)