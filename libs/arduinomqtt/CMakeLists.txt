add_library(pac-arduinomqtt INTERFACE)

target_sources(pac-arduinomqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/examplesMain.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/extras/examples/x86_Connect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTUnsubscribeClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTFormat.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTSubscribeServer.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTConnectServer.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTPacket.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTUnsubscribeServer.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTConnectClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTSerializePublish.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTDeserializePublish.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTSubscribeClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MqttClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/StackTrace.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTSubscribe.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTFormat.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTUnsubscribe.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTPublish.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTPacket.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src/MQTTPacket/MQTTConnect.h"
)

target_include_directories(pac-arduinomqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoMqtt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinomqtt INTERFACE
    arduino-compat
)
