add_library(pac-adafruit-st7735-and-st7789-library INTERFACE)

target_sources(pac-adafruit-st7735-and-st7789-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-ST7735-Library/Adafruit_ST7735.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-ST7735-Library/Adafruit_ST7789.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-ST7735-Library/Adafruit_ST77xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-ST7735-Library/Adafruit_ST7789.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-ST7735-Library/Adafruit_ST77xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-ST7735-Library/Adafruit_ST7735.h"
)

target_include_directories(pac-adafruit-st7735-and-st7789-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-ST7735-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-st7735-and-st7789-library INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
