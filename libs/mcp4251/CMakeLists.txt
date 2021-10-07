add_library(pac-mcp4251 INTERFACE)

target_sources(pac-mcp4251 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP4251/src/MCP4251.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP4251/src/MCP4251.h"
)

target_include_directories(pac-mcp4251 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP4251/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp4251 INTERFACE
    arduino-compat
)
