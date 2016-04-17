find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRECTORIES})

file(GLOB SOURCES "../src/*.cpp")
file(GLOB TEST_SOURCES "*.cpp")

list(REMOVE_ITEM SOURCES "../src/main.cpp")

add_library(OpenCLDLLibrary SHARED ${SOURCES})
add_executable(runTests ${TEST_SOURCES})
target_link_libraries(runTests ${GTEST_LIBRARIES} OpenCLDLLibrary)

add_test(AllTests runTests)