cmake_minimum_required(VERSION 3.14)
project(Task_1)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(sol_test sol_test.cpp)
target_link_libraries(sol_test GTest::gtest_main)
target_include_directories(sol_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

include(GoogleTest)
gtest_discover_tests(sol_test)
