add_library(pac-mqtt INTERFACE)

target_sources(pac-mqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src/MQTTClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src/lwmqtt/helpers.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src/lwmqtt/string.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src/lwmqtt/packet.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src/lwmqtt/client.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src/MQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src/MQTT.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src/lwmqtt/helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src/lwmqtt/packet.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src/lwmqtt/lwmqtt.h"
)

target_include_directories(pac-mqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-mqtt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mqtt INTERFACE
    arduino-compat
)
