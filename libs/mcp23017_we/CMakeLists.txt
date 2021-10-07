add_library(pac-mcp23017_we INTERFACE)

target_sources(pac-mcp23017_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP23017_WE/src/MCP23017.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP23017_WE/src/MCP23017.h"
)

target_include_directories(pac-mcp23017_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP23017_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp23017_we INTERFACE
    arduino-compat
)
