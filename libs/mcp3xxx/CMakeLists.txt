add_library(pac-mcp3xxx INTERFACE)

target_sources(pac-mcp3xxx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP3XXX/src/MCP3XXX.h"
)

target_include_directories(pac-mcp3xxx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP3XXX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp3xxx INTERFACE
    arduino-compat
)
