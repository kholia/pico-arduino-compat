add_library(pac-mcp4728 INTERFACE)

target_sources(pac-mcp4728 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP4728/MCP4728.h"
)

target_include_directories(pac-mcp4728 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP4728"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp4728 INTERFACE
    arduino-compat
)
