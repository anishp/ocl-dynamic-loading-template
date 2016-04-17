cmake_minimum_required(VERSION 2.4.8)
project(OpenCLDynamicLoading)
set (CMAKE_CXX_FLAGS "-std=c++0x")
set(CMAKE_BUIL_TYPE Debug)
set(CMAKE_MACOSX_RPATH 1)

include_directories(include)

add_subdirectory(src)
add_subdirectory(platforms)

enable_testing()
add_subdirectory(test)