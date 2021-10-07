add_library(pac-mcp7940 INTERFACE)

target_sources(pac-mcp7940 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP7940/src/MCP7940.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP7940/src/MCP7940.h"
)

target_include_directories(pac-mcp7940 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP7940/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp7940 INTERFACE
    arduino-compat
)
