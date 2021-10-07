add_library(pac-sparkfun-graphic-lcd-serial-backpack INTERFACE)

target_sources(pac-sparkfun-graphic-lcd-serial-backpack INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Graphic_LCD_Serial_Backpack_Arduino_Library/src/SparkFunSerialGraphicLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Graphic_LCD_Serial_Backpack_Arduino_Library/src/SparkFunSerialGraphicLCD.h"
)

target_include_directories(pac-sparkfun-graphic-lcd-serial-backpack INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Graphic_LCD_Serial_Backpack_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-graphic-lcd-serial-backpack INTERFACE
    arduino-compat
)
