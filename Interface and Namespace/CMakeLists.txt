cmake_minimum_required(VERSION 3.0.0)
project(Cmake1 VERSION 0.1.0 LANGUAGES CXX)
include_directories(
        ${PROJECT_SOURCE_DIR}/inc
        ${PROJECT_SOURCE_DIR}/src
)
add_executable(Cmake1 main.cpp)

