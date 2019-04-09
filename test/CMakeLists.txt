cmake_minimum_required(VERSION 3.13)
project(tests)

set(CMAKE_CXX_STANDARD 17)

find_package(Catch2 REQUIRED)


file(GLOB SOURCES "*.cpp")

include_directories("include")
include_directories("../src")

add_library (my_library STATIC
             "../src/unit.cpp"
             "../src/lambda.cpp")

add_executable(tests ${SOURCES})
target_link_libraries(tests Catch2::Catch2 my_library)

include(CTest)
include(ParseAndAddCatchTests)
ParseAndAddCatchTests(tests)
