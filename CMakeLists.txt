cmake_minimum_required(VERSION 2.4.8)
project(OpenCLDynamicLoading)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable(oclDynamicLoading ${SOURCES})