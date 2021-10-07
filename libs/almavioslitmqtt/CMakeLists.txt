add_library(pac-almavioslitmqtt INTERFACE)

target_sources(pac-almavioslitmqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/AlmaviosLitMqttApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/packages/providers/azure/Azure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/vendor/NTPClient/NTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/vendor/pubsubclient/PubSubClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/vendor/Time/Time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/examples/basic_azure_esp8266/basic_azure_esp8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/examples/basic_azure_esp32/basic_azure_esp32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/AlmaviosLitMqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/AlmaviosLitMqttApi.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/packages/providers/Providers.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/packages/providers/azure/Azure.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/packages/containers/Containers.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/packages/containers/esp32/esp32.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/packages/containers/esp8266/esp8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/vendor/NTPClient/NTPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/vendor/pubsubclient/PubSubClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/vendor/Time/Time.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src/vendor/Time/TimeLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/examples/publish_json/certs.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/examples/basic_azure_esp8266/certs.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/examples/basic_azure_esp32/certs.h"
  "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/examples/publish_csv/certs.h"
)

target_include_directories(pac-almavioslitmqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/almavios-lit-mqtt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-almavioslitmqtt INTERFACE
    arduino-compat
)
