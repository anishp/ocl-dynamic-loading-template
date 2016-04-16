include_directories(include)
add_library(VectorCPU MODULE "src/VectorUtils.cpp")
set_target_properties(VectorCPU
  PROPERTIES
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")