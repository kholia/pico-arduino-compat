add_library(pac-mcp9800 INTERFACE)

target_sources(pac-mcp9800 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP9800/MCP9800.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP9800/MCP9800.h"
)

target_include_directories(pac-mcp9800 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP9800"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp9800 INTERFACE
    arduino-compat
)
