add_library(mcp23017 INTERFACE)

target_sources(mcp23017 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mcp23017/src/MCP23017.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mcp23017/src/MCP23017.h"
)

target_include_directories(mcp23017 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-mcp23017/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp23017 INTERFACE
    arduino-compat
)
