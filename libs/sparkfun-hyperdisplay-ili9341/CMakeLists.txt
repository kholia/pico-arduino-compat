add_library(sparkfun-hyperdisplay-ili9341 INTERFACE)

target_sources(sparkfun-hyperdisplay-ili9341 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9341_ArduinoLibrary/src/HyperDisplay_ILI9341.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9341_ArduinoLibrary/src/fast_hsv2rgb_32bit.c"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9341_ArduinoLibrary/src/fast_hsv2rgb_8bit.c"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9341_ArduinoLibrary/src/fast_hsv2rgb.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9341_ArduinoLibrary/src/HyperDisplay_ILI9341.h"
)

target_include_directories(sparkfun-hyperdisplay-ili9341 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9341_ArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-hyperdisplay-ili9341 INTERFACE
    arduino-compat
)
