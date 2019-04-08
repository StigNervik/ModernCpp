cmake_minimum_required(VERSION 3.13)
project(PracticalCpp)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

include_directories(include)

add_subdirectory(test)

file(GLOB SOURCES "src/*.cpp")

add_executable(simple ${SOURCES})

