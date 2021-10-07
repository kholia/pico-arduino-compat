add_library(pac-mcp9802 INTERFACE)

target_sources(pac-mcp9802 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP9802/MCP9802.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP9802/utility/MCP9802_PString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP9802/MCP9802.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCP9802/utility/MCP9802InfoStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCP9802/utility/MCP9802ComStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCP9802/utility/MCP9802_PString.h"
)

target_include_directories(pac-mcp9802 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP9802"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp9802 INTERFACE
    arduino-compat
)
