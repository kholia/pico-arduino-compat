add_library(pac-mcp9808 INTERFACE)

target_sources(pac-mcp9808 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP9808/src/MCP9808.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP9808/src/MCP9808.h"
)

target_include_directories(pac-mcp9808 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP9808/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp9808 INTERFACE
    arduino-compat
)
