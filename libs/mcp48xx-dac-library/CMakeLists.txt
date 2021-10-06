add_library(mcp48xx-dac-library INTERFACE)

target_sources(mcp48xx-dac-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP48xx/src/MCP48xx.h"
)

target_include_directories(mcp48xx-dac-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP48xx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp48xx-dac-library INTERFACE
    arduino-compat
)
