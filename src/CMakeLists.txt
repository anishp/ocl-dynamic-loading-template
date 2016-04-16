file(GLOB SOURCES "*.cpp")
add_executable(oclDynamicLoading ${SOURCES})
target_link_libraries(oclDynamicLoading dl)
set_target_properties(oclDynamicLoading
  PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")