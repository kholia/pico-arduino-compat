add_library(adafruit-ssd1325 INTERFACE)

target_sources(adafruit-ssd1325 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1325_Library/Adafruit_SSD1325.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1325_Library/Adafruit_SSD1325.h"
)

target_include_directories(adafruit-ssd1325 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1325_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(adafruit-ssd1325 INTERFACE
    arduino-compat
    adafruit-gfx-library
)
