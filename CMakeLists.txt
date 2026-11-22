cmake_minimum_required(VERSION 3.10)

project(lab3)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB SOURCES
  "tasks/*.cpp"
  "ilib/*.cpp"
)

add_executable(lab3 main.cpp ${SOURCES})
