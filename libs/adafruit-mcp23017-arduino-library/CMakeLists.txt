add_library(adafruit-mcp23017-arduino-library INTERFACE)

target_sources(adafruit-mcp23017-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MCP23017-Arduino-Library/src/Adafruit_MCP23X08.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MCP23017-Arduino-Library/src/Adafruit_MCP23XXX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MCP23017-Arduino-Library/src/Adafruit_MCP23X17.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MCP23017-Arduino-Library/src/Adafruit_MCP23XXX.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MCP23017-Arduino-Library/src/Adafruit_MCP23X08.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MCP23017-Arduino-Library/src/Adafruit_MCP23X17.h"
)

target_include_directories(adafruit-mcp23017-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MCP23017-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mcp23017-arduino-library INTERFACE
    arduino-compat
    adafruit-busio
)
