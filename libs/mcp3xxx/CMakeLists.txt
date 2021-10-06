add_library(mcp3xxx INTERFACE)

target_sources(mcp3xxx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP3XXX/src/MCP3XXX.h"
)

target_include_directories(mcp3xxx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP3XXX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp3xxx INTERFACE
    arduino-compat
)
