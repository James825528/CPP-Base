cmake_minimum_required(VERSION 3.0.0)
project(threads VERSION 0.1.0 LANGUAGES C CXX)
add_compile_options(-std=c++11 -pthread)

add_executable(threads main.cpp)
