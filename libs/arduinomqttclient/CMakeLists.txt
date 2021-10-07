add_library(pac-arduinomqttclient INTERFACE)

target_sources(pac-arduinomqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqttClient/src/MqttClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqttClient/src/MqttClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqttClient/src/ArduinoMqttClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqttClient/examples/WiFiEchoCallback/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqttClient/examples/WiFiSimpleReceive/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqttClient/examples/WiFiAdvancedCallback/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqttClient/examples/WiFiSimpleReceiveCallback/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqttClient/examples/WiFiEcho/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqttClient/examples/WiFiSimpleSender/arduino_secrets.h"
)

target_include_directories(pac-arduinomqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqttClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinomqttclient INTERFACE
    arduino-compat
)
