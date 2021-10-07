add_library(pac-mcp45hvx1 INTERFACE)

target_sources(pac-mcp45hvx1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP45HVX1/src/MCP45HVX1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP45HVX1/src/MCP45HVX1.h"
)

target_include_directories(pac-mcp45hvx1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP45HVX1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp45hvx1 INTERFACE
    arduino-compat
)
