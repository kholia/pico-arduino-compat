add_library(pac-adafruit-mcp23008-library INTERFACE)

target_sources(pac-adafruit-mcp23008-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MCP23008-library/Adafruit_MCP23008.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MCP23008-library/Adafruit_MCP23008.h"
)

target_include_directories(pac-adafruit-mcp23008-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MCP23008-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-mcp23008-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
