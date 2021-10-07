add_library(pac-adafruit-rgb-lcd-shield-library INTERFACE)

target_sources(pac-adafruit-rgb-lcd-shield-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-RGB-LCD-Shield-Library/Adafruit_RGBLCDShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-RGB-LCD-Shield-Library/utility/Adafruit_MCP23017.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-RGB-LCD-Shield-Library/Adafruit_RGBLCDShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-RGB-LCD-Shield-Library/utility/Adafruit_MCP23017.h"
)

target_include_directories(pac-adafruit-rgb-lcd-shield-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-RGB-LCD-Shield-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-rgb-lcd-shield-library INTERFACE
    arduino-compat
)
