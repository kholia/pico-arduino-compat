add_library(pac-adafruit-ssd1306-wemos-mini-oled INTERFACE)

target_sources(pac-adafruit-ssd1306-wemos-mini-oled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1306_Wemos_OLED/Adafruit_SSD1306.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1306_Wemos_OLED/Adafruit_SSD1306.h"
)

target_include_directories(pac-adafruit-ssd1306-wemos-mini-oled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SSD1306_Wemos_OLED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-ssd1306-wemos-mini-oled INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
