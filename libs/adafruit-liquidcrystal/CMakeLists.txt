add_library(adafruit-liquidcrystal INTERFACE)

target_sources(adafruit-liquidcrystal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LiquidCrystal/Adafruit_LiquidCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LiquidCrystal/utility/Adafruit_MCP23008.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LiquidCrystal/Adafruit_LiquidCrystal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LiquidCrystal/utility/Adafruit_MCP23008.h"
)

target_include_directories(adafruit-liquidcrystal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LiquidCrystal"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-liquidcrystal INTERFACE
    arduino-compat
)
