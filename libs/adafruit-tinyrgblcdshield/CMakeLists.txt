add_library(pac-adafruit-tinyrgblcdshield INTERFACE)

target_sources(pac-adafruit-tinyrgblcdshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TinyRGBLCDShield/Adafruit_TinyRGBLCDShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TinyRGBLCDShield/Adafruit_TinyMCP23017.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TinyRGBLCDShield/Adafruit_TinyRGBLCDShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TinyRGBLCDShield/Adafruit_TinyMCP23017.h"
)

target_include_directories(pac-adafruit-tinyrgblcdshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TinyRGBLCDShield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-tinyrgblcdshield INTERFACE
    arduino-compat
)
