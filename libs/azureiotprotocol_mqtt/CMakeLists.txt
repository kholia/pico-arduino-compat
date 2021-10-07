add_library(pac-azureiotprotocol_mqtt INTERFACE)

target_sources(pac-azureiotprotocol_mqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-protocol-mqtt/src/azure_umqtt_c/mqtt_codec.c"
  "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-protocol-mqtt/src/azure_umqtt_c/mqtt_message.c"
  "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-protocol-mqtt/src/azure_umqtt_c/mqtt_client.c"
  "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-protocol-mqtt/src/AzureIoTProtocol_MQTT.h"
)

target_include_directories(pac-azureiotprotocol_mqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-protocol-mqtt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-azureiotprotocol_mqtt INTERFACE
    arduino-compat
)
