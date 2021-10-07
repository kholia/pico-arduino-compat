add_library(pac-mcp3202 INTERFACE)

target_sources(pac-mcp3202 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP3202/src/MCP3202.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP3202/src/MCP3202.h"
)

target_include_directories(pac-mcp3202 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP3202/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp3202 INTERFACE
    arduino-compat
)
