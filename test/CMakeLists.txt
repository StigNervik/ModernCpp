cmake_minimum_required(VERSION 3.13)
project(tests)

set(CMAKE_CXX_STANDARD 17)

find_package(Catch2 REQUIRED)


file(GLOB SOURCES "*.cpp")


add_executable(tests ${SOURCES})
target_link_libraries(tests Catch2::Catch2)

include(CTest)
include(ParseAndAddCatchTests)
ParseAndAddCatchTests(tests)
