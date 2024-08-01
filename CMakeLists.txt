#配置这个CMake将可执行文件设置到bin目录下
cmake_minimum_required(VERSION 3.10)

project(MAINPROJECT)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)