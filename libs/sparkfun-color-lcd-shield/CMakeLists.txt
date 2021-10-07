add_library(pac-sparkfun-color-lcd-shield INTERFACE)

target_sources(pac-sparkfun-color-lcd-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Color_LCD_Shield_Arduino_Library/src/SparkFunColorLCDShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Color_LCD_Shield_Arduino_Library/src/SparkFunColorLCDShield.h"
)

target_include_directories(pac-sparkfun-color-lcd-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Color_LCD_Shield_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-color-lcd-shield INTERFACE
    arduino-compat
)
