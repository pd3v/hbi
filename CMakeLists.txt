cmake_minimum_required(VERSION 3.19.2)

set (CMAKE_CXX_STANDARD 17)

if (APPLE)
  set(CMAKE_C_COMPILER /usr/bin/clang)
  set(CMAKE_CXX_COMPILER /usr/bin/clang++)
endif (APPLE)

if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
  set(CMAKE_C_COMPILER C:/MinGW/bin/gcc.exe)
  set(CMAKE_CXX_COMPILER C:/MinGW/bin/g++.exe)
endif ()  

if (LINUX)
  set(CMAKE_C_COMPILER /usr/bin/gcc)
  set(CMAKE_CXX_COMPILER /usr/bin/g++)
endif (LINUX)  

project(hbi VERSION 0.0.1)

add_executable("${PROJECT_NAME}" main.cpp)