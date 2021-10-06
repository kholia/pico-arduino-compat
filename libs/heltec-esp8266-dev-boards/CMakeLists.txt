add_library(heltec-esp8266-dev-boards INTERFACE)

target_sources(heltec-esp8266-dev-boards INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/src/heltec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/src/oled/OLEDDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/src/oled/OLEDDisplayUi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/src/heltec.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/src/oled/OLEDDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/src/oled/OLEDDisplayUi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/src/oled/OLEDDisplayFonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/src/oled/SSD1306.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/src/oled/SSD1306Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/examples/OLED/SSD1306UiDemo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/examples/OLED/SSD1306SimpleDemo/images.h"
)

target_include_directories(heltec-esp8266-dev-boards INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP8266/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(heltec-esp8266-dev-boards INTERFACE
    arduino-compat
)
