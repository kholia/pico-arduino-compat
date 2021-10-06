add_library(esp8266-and-esp32-oled-driver-for-ssd1306-displays INTERFACE)

target_sources(esp8266-and-esp32-oled-driver-for-ssd1306-displays INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/OLEDDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/OLEDDisplayUi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/OLEDDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/SH1106Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/OLEDDisplayUi.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/SSD1306I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/SSD1306Spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/OLEDDisplayFonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/SSD1306.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/SH1106Brzo.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/SSD1306Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/SSD1306Brzo.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/SH1106.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src/SH1106Spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/examples/SSD1306ClockDemo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/examples/SSD1306TwoScreenDemo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/examples/SSD1306UiDemo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/examples/SSD1306SimpleDemo/images.h"
)

target_include_directories(esp8266-and-esp32-oled-driver-for-ssd1306-displays INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-oled-ssd1306/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp8266-and-esp32-oled-driver-for-ssd1306-displays INTERFACE
    arduino-compat
)
