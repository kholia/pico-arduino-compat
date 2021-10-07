add_library(pac-espnow2mqtt INTERFACE)

target_sources(pac-espnow2mqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/test/test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/examples/server/server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/examples/client/pingBasicClient/client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/examples/client/sendClient/client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/examples/client/subscribeClient/client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/examples/client/sleepingClient/client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/include/display.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/src/EspNow2MqttClient.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/src/EspNow2MqttGateway.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/src/criptMsg.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/src/EspNowUtil.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/src/messages.pb.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/include/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/src/messages.pb.h"
)

target_include_directories(pac-espnow2mqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPNow2Mqtt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espnow2mqtt INTERFACE
    arduino-compat
)
