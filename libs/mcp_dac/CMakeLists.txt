add_library(pac-mcp_dac INTERFACE)

target_sources(pac-mcp_dac INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP_DAC/MCP_DAC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP_DAC/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP_DAC/MCP_DAC.h"
)

target_include_directories(pac-mcp_dac INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP_DAC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp_dac INTERFACE
    arduino-compat
)
