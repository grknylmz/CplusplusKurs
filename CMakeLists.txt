cmake_minimum_required(VERSION 3.2)
project(ClassEx)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ClassEx ${SOURCE_FILES} Point.cpp Point.h Dyna.cpp Dyna.h Complex.cpp Complex.h myint.h)