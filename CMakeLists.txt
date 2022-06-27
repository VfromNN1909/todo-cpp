cmake_minimum_required(VERSION 3.22)
project(todo_cpp_console)

set(CMAKE_CXX_STANDARD 23)

add_executable(todo_cpp_console main.cpp models/Task.cpp models/Task.h)

