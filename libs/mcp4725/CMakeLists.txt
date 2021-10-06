add_library(mcp4725 INTERFACE)

target_sources(mcp4725 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP4725/MCP4725.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP4725/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP4725/MCP4725.h"
)

target_include_directories(mcp4725 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP4725"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp4725 INTERFACE
    arduino-compat
)
