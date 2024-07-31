cmake_minimum_required(VERSION 3.10)
project(PRACTISE)
set(CMAKE_CXX_STANDARD 17)


set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
set(BOX_Dir ${CMAKE_SOURCE_DIR}/src/Boxclass)

#add_executable(practice_cmake test/practice.cpp)

add_subdirectory(src)