cmake_minimum_required (VERSION 2.8)
project(code-for-blog)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++17 -Wall")
find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(MyLearn test.cpp)
target_link_libraries(MyLearn ${GTEST_BOTH_LIBRARIES})
target_link_libraries(MyLearn ${CMAKE_THREAD_LIBS_INIT})
add_test(Test MyLearn)
enable_testing()
