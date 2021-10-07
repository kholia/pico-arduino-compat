add_library(pac-adafruit-mcp9808-library INTERFACE)

target_sources(pac-adafruit-mcp9808-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP9808_Library/Adafruit_MCP9808.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP9808_Library/Adafruit_MCP9808.h"
)

target_include_directories(pac-adafruit-mcp9808-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP9808_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-mcp9808-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
