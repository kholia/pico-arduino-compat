add_library(pac-sparkfun-micro-oled-breakout INTERFACE)

target_sources(pac-sparkfun-micro-oled-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Micro_OLED_Arduino_Library/src/hardware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Micro_OLED_Arduino_Library/src/SFE_MicroOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Micro_OLED_Arduino_Library/src/SFE_MicroOLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Micro_OLED_Arduino_Library/src/util/fontlargeletter31x48.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Micro_OLED_Arduino_Library/src/util/font5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Micro_OLED_Arduino_Library/src/util/7segment.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Micro_OLED_Arduino_Library/src/util/fontlargenumber.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Micro_OLED_Arduino_Library/src/util/font8x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Micro_OLED_Arduino_Library/examples/Example7_DisplayBitmap2/bitmaps.h"
)

target_include_directories(pac-sparkfun-micro-oled-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Micro_OLED_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-micro-oled-breakout INTERFACE
    arduino-compat
)
