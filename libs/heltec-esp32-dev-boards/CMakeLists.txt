add_library(heltec-esp32-dev-boards INTERFACE)

target_sources(heltec-esp32-dev-boards INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/BMP180.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/heltec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/lora/LoRa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/oled/OLEDDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/oled/OLEDDisplayUi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/BMP180.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/heltec.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/lora/LoRa.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/oled/OLEDDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/oled/OLEDDisplayUi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/oled/OLEDDisplayFonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/oled/SSD1306.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src/oled/SSD1306Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/examples/Factory_Test/WIFI_Kit_32_FactoryTest/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/examples/Factory_Test/WiFi_LoRa_32FactoryTest/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/examples/OLED/SSD1306UiDemo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/examples/OLED/SSD1306SimpleDemo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/examples/LoRa/LoRaPingpongTimeoutRetransmissionOLED/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/examples/LoRa/OLED_LoRa_Sender/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/examples/LoRa/OLED_LoRa_Receiver/images.h"
)

target_include_directories(heltec-esp32-dev-boards INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Heltec_ESP32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(heltec-esp32-dev-boards INTERFACE
    arduino-compat
)
