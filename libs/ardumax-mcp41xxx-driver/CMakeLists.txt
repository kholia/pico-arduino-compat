add_library(pac-ardumax-mcp41xxx-driver INTERFACE)

target_sources(pac-ardumax-mcp41xxx-driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP41xxx/src/MCP41xxx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP41xxx/src/MCP41xxx.h"
)

target_include_directories(pac-ardumax-mcp41xxx-driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP41xxx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ardumax-mcp41xxx-driver INTERFACE
    arduino-compat
)
