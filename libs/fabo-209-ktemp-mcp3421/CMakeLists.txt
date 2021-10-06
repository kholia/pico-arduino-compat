add_library(fabo-209-ktemp-mcp3421 INTERFACE)

target_sources(fabo-209-ktemp-mcp3421 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoKTemp-MCP3421-Library/src/FaBoKTemp_MCP3421.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoKTemp-MCP3421-Library/src/FaBoKTemp_MCP3421.h"
)

target_include_directories(fabo-209-ktemp-mcp3421 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoKTemp-MCP3421-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-209-ktemp-mcp3421 INTERFACE
    arduino-compat
)
