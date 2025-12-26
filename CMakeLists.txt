cmake_minimum_required(VERSION 4.1)
project(Daemonix)

set(CMAKE_CXX_STANDARD 26)

set(SOURCE_FILES src/main.cpp)
add_executable(Daemonix ${SOURCE_FILES})