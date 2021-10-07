add_library(pac-esp8266mqttclient INTERFACE)

target_sources(pac-esp8266mqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src/MQTTTransport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src/ESP8266MQTTClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src/mqtt_outbox.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src/mqtt_msg.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src/uri_parser.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src/mqtt_outbox.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src/ESP8266MQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src/uri_parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src/MQTTTransport.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src/mqtt_msg.h"
)

target_include_directories(pac-esp8266mqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266mqttclient INTERFACE
    arduino-compat
)
