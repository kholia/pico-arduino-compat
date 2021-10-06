add_library(adafruit-mcp3008 INTERFACE)

target_sources(adafruit-mcp3008 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP3008/Adafruit_MCP3008.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP3008/Adafruit_MCP3008.h"
)

target_include_directories(adafruit-mcp3008 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MCP3008"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mcp3008 INTERFACE
    arduino-compat
    adafruit-busio
)
