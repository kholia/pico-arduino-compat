add_library(pac-adafruit-mcp3008 INTERFACE)

target_sources(pac-adafruit-mcp3008 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP3008/Adafruit_MCP3008.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP3008/Adafruit_MCP3008.h"
)

target_include_directories(pac-adafruit-mcp3008 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP3008"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-mcp3008 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
