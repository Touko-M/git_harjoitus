cmake_minimum_required(VERSION 3.14)
project(HelloCI LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)
include_directories(include)

enable_testing()

add_executable(run_tests tests/test_hello.cpp src/hello.cpp)
target_include_directories(run_tests PRIVATE include)
target_link_libraries(run_tests GTest::GTest GTest::Main)

add_test(NAME MyTests COMMAND run_tests)
