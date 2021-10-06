add_library(adafruit-ssd1305 INTERFACE)

target_sources(adafruit-ssd1305 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1305/Adafruit_SSD1305.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1305/Adafruit_SSD1305.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1305/splash.h"
)

target_include_directories(adafruit-ssd1305 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1305"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(adafruit-ssd1305 INTERFACE
    arduino-compat
    adafruit-gfx-library
)
