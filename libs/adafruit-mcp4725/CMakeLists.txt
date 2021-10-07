add_library(pac-adafruit-mcp4725 INTERFACE)

target_sources(pac-adafruit-mcp4725 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP4725/Adafruit_MCP4725.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP4725/Adafruit_MCP4725.h"
)

target_include_directories(pac-adafruit-mcp4725 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP4725"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-mcp4725 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
