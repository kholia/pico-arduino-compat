add_library(ise-i2c-mcp3427-library INTERFACE)

target_sources(ise-i2c-mcp3427-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mcp3427/src/MCP3427.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mcp3427/src/MCP3427.h"
)

target_include_directories(ise-i2c-mcp3427-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-mcp3427/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ise-i2c-mcp3427-library INTERFACE
    arduino-compat
)
