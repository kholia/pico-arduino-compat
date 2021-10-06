add_library(sparkfun-flexible-grayscale-oled-breakout INTERFACE)

target_sources(sparkfun-flexible-grayscale-oled-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SSD1320_OLED_Arduino_Library/src/SSD1320_OLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SSD1320_OLED_Arduino_Library/src/SSD1320_OLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SSD1320_OLED_Arduino_Library/src/util/font5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SSD1320_OLED_Arduino_Library/src/util/7segment.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SSD1320_OLED_Arduino_Library/src/util/fontlargenumber.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SSD1320_OLED_Arduino_Library/src/util/font8x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SSD1320_OLED_Arduino_Library/examples/Example2_Graphics/macaque.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SSD1320_OLED_Arduino_Library/examples/Example2_Graphics/che.h"
)

target_include_directories(sparkfun-flexible-grayscale-oled-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SSD1320_OLED_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-flexible-grayscale-oled-breakout INTERFACE
    arduino-compat
)
