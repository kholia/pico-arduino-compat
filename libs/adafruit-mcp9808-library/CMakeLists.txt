add_library(adafruit-mcp9808-library INTERFACE)

target_sources(adafruit-mcp9808-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP9808_Library/Adafruit_MCP9808.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP9808_Library/Adafruit_MCP9808.h"
)

target_include_directories(adafruit-mcp9808-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP9808_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mcp9808-library INTERFACE
    arduino-compat
    adafruit-busio
)
