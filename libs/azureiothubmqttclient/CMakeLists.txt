add_library(azureiothubmqttclient INTERFACE)

target_sources(azureiothubmqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/AzureIoTHubMQTTClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/MQTT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/Base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/PubSubClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/NtpClientLib_ESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/sha256.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/PubSubClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/PubSubClient_JSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/Base64.h"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/sha256.h"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/MQTT.h"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/NtpClientLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src/AzureIoTHubMQTTClient.h"
)

target_include_directories(azureiothubmqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AzureIoTHubMQTTClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(azureiothubmqttclient INTERFACE
    arduino-compat
)
