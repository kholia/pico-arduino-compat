add_library(pac-mcp342x INTERFACE)

target_sources(pac-mcp342x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP342x/src/MCP342x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP342x/src/MCP342x.h"
)

target_include_directories(pac-mcp342x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP342x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp342x INTERFACE
    arduino-compat
)
