add_library(pac-mcp23017_rt INTERFACE)

target_sources(pac-mcp23017_rt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP23017_RT/MCP23017.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP23017_RT/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP23017_RT/MCP23017.h"
)

target_include_directories(pac-mcp23017_rt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP23017_RT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp23017_rt INTERFACE
    arduino-compat
)
