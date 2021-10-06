add_library(mcp4728 INTERFACE)

target_sources(mcp4728 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP4728/MCP4728.h"
)

target_include_directories(mcp4728 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP4728"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp4728 INTERFACE
    arduino-compat
)
