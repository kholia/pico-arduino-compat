add_library(pac-adafruit-mcp4728 INTERFACE)

target_sources(pac-adafruit-mcp4728 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP4728/Adafruit_MCP4728.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP4728/Adafruit_MCP4728.h"
)

target_include_directories(pac-adafruit-mcp4728 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP4728"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-mcp4728 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
