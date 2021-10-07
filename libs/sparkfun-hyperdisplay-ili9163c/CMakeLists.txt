add_library(pac-sparkfun-hyperdisplay-ili9163c INTERFACE)

target_sources(pac-sparkfun-hyperdisplay-ili9163c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9163C_ArduinoLibrary/src/HyperDisplay_ILI9163C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9163C_ArduinoLibrary/src/fast_hsv2rgb_32bit.c"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9163C_ArduinoLibrary/src/fast_hsv2rgb_8bit.c"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9163C_ArduinoLibrary/src/fast_hsv2rgb.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9163C_ArduinoLibrary/src/HyperDisplay_ILI9163C.h"
)

target_include_directories(pac-sparkfun-hyperdisplay-ili9163c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_ILI9163C_ArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-hyperdisplay-ili9163c INTERFACE
    arduino-compat
)
