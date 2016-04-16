cmake_minimum_required(VERSION 2.4.8)
project(OpenCLDynamicLoading)
set(CMAKE_BUIL_TYPE Release)
set(CMAKE_MACOSX_RPATH 1)

include_directories(include)

add_subdirectory(src)
add_subdirectory(platforms)