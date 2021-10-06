add_library(sparkfun-rgb-oled-64x64-library INTERFACE)

target_sources(sparkfun-rgb-oled-64x64-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src/CustomFont65k.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src/SparkFun_SSD1357_OLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src/SparkFun_RGB_OLED_64x64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example99_SparkX_DemoCode/QRcodeFont.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example6_CustomFont/QRcodeFont.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src/fast_hsv2rgb_32bit.c"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src/fast_hsv2rgb_8bit.c"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src/CustomFont65k.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src/SparkFun_SSD1357_OLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src/fast_hsv2rgb.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src/SparkFun_RGB_OLED_64x64.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src/util/font5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example99_SparkX_DemoCode/MonaLisa64x64.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example99_SparkX_DemoCode/QRcodeFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example99_SparkX_DemoCode/bitmaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example99_SparkX_DemoCode/Galaxy64x64.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example99_SparkX_DemoCode/SFE_Flame64x64.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example99_SparkX_DemoCode/Magma64x64.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example99_SparkX_DemoCode/font8x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example6_CustomFont/QRcodeFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/examples/Example6_CustomFont/font8x16.h"
)

target_include_directories(sparkfun-rgb-oled-64x64-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sparkfun_RGB_OLED_64x64_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-rgb-oled-64x64-library INTERFACE
    arduino-compat
)
