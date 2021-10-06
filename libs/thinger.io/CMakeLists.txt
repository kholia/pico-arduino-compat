add_library(thinger.io INTERFACE)

target_sources(thinger.io INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/util/md5.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/thinger/thinger_decoder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/thinger/thinger_message.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/thinger/thinger_io.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/thinger/thinger_encoder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/thinger/thinger_map.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/thinger/thinger_resource.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerESP32OTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerMKRGSM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerESP32Eth.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerESP32FreeRTOS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerOTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerWifi101.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerWiFiNINA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerWifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerCC3000.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerESP8266OTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerWiFiNINAOTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerTinyGSM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerLinkItOneWifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerLinkItOneGPRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerENC28J60.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerYun.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerMKRNB.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerConsole.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerMbed.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerMKRNBOTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerESP8266AT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerMbedOTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerSmartConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/ThingerWebConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/util/md5.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/thinger/thinger.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src/thinger/pson.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/EnergiaCC3200/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/ESP32/ESP32/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/ESP32/ESP32OTA/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/ESP32/ESP32Eth/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/ESP32/ESP32RTOS/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoMKRNB1500/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoEthernet/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoYun/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoTinyGSM/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoGSM1400/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoENC28J60/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoWifi/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoNano33IOT/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoCC3000/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoPortentaH7/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoMKR1010/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoNanoRP2040/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/Arduino/ArduinoMKR1000/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/ESP8266/ESP8266SmartConfig/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/ESP8266/ESP8266/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/ESP8266/ESP8266AT/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/examples/ESP8266/ESP8266OTA/arduino_secrets.h"
)

target_include_directories(thinger.io INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thinger.io INTERFACE
    arduino-compat
)
