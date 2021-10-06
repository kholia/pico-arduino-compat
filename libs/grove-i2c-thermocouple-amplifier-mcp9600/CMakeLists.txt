add_library(grove-i2c-thermocouple-amplifier-mcp9600 INTERFACE)

target_sources(grove-i2c-thermocouple-amplifier-mcp9600 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_MCP9600/Seeed_MCP9600.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_MCP9600/Seeed_MCP9600.h"
)

target_include_directories(grove-i2c-thermocouple-amplifier-mcp9600 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_MCP9600"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-i2c-thermocouple-amplifier-mcp9600 INTERFACE
    arduino-compat
)
