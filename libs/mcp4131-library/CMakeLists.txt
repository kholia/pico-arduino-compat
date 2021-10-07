add_library(pac-mcp4131-library INTERFACE)

target_sources(pac-mcp4131-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MCP4131/src/MCP4131.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MCP4131/src/MCP4131.h"
)

target_include_directories(pac-mcp4131-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-MCP4131/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp4131-library INTERFACE
    arduino-compat
)
