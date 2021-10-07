add_library(pac-adafruit-ssd1306 INTERFACE)

target_sources(pac-adafruit-ssd1306 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1306/Adafruit_SSD1306.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1306/Adafruit_SSD1306.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1306/splash.h"
)

target_include_directories(pac-adafruit-ssd1306 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1306"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-ssd1306 INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
