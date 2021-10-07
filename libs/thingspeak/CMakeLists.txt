add_library(pac-thingspeak INTERFACE)

target_sources(pac-thingspeak INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/src/ThingSpeak.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/src/ThingSpeak.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP32/ReadFieldSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP32/WriteSingleFieldSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP32/ReadMultipleFieldsSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP32/ReadMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP32/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP32/WriteMultipleFieldsSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP32/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP32/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoEthernet/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoEthernet/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoEthernet/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRVIDOR4000/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRVIDOR4000/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRVIDOR4000/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoYun/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoYun/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoYun/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoUnoWiFi Rev2/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoUnoWiFi Rev2/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoUnoWiFi Rev2/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoWiFiShield/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoWiFiShield/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoWiFiShield/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRWiFi1010/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRWiFi1010/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRWiFi1010/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/program board directly/ReadFieldSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/program board directly/WriteSingleFieldSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/program board directly/ReadMultipleFieldsSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/program board directly/ReadMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/program board directly/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/program board directly/WriteMultipleFieldsSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/program board directly/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/program board directly/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/via AT commands/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/via AT commands/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ESP8266/via AT commands/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoWiFiShield101/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoWiFiShield101/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoWiFiShield101/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRGSM1400/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRGSM1400/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRGSM1400/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRETHShield/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRETHShield/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKRETHShield/WriteMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKR1000/ReadFieldSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKR1000/WriteSingleFieldSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKR1000/ReadMultipleFieldsSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKR1000/ReadMultipleFields/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKR1000/ReadField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKR1000/WriteMultipleFieldsSecure/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKR1000/WriteSingleField/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/examples/ArduinoMKR1000/WriteMultipleFields/secrets.h"
)

target_include_directories(pac-thingspeak INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/thingspeak-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-thingspeak INTERFACE
    arduino-compat
)
