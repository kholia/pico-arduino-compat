add_library(mcp9808_rt INTERFACE)

target_sources(mcp9808_rt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP9808_RT/mcp9808.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP9808_RT/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP9808_RT/mcp9808.h"
)

target_include_directories(mcp9808_rt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP9808_RT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp9808_rt INTERFACE
    arduino-compat
)
