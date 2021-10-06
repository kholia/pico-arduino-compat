add_library(mcp3221 INTERFACE)

target_sources(mcp3221 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP3221/MCP3221.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP3221/utility/MCP3221_PString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP3221/MCP3221.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCP3221/utility/MCP3221InfoStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCP3221/utility/MCP3221_PString.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCP3221/utility/MCP3221ComStr.h"
)

target_include_directories(mcp3221 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP3221"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp3221 INTERFACE
    arduino-compat
)
