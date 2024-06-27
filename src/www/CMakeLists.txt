cmake_minimum_required(VERSION 3.22)
project(app)
set(CMAKE_CXX_STANDARD 20) # -std=c++20
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -pedantic")

add_library(tools tools.cpp) # lib
add_executable(main main.cpp)
target_link_libraries(main tools)