add_library(pac-mcp3x21 INTERFACE)

target_sources(pac-mcp3x21 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP3X21/MCP3X21.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP3X21/MCP3X21.h"
)

target_include_directories(pac-mcp3x21 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP3X21"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp3x21 INTERFACE
    arduino-compat
)
