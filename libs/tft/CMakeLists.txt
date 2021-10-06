add_library(tft INTERFACE)

target_sources(tft INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFT/src/TFT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFT/src/utility/Adafruit_ST7735.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFT/src/utility/Adafruit_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFT/src/utility/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/TFT/src/TFT.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT/src/utility/Adafruit_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT/src/utility/PImage.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT/src/utility/Adafruit_ST7735.h"
)

target_include_directories(tft INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(tft INTERFACE
    arduino-compat
    adafruit-gfx-library
)
