add_library(pac-arduinowebsockets INTERFACE)

target_sources(pac-arduinowebsockets INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/websockets_client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/ws_common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/websockets_server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/websockets_endpoint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/crypto.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/message.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/ws_config_defs.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/message.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/server.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/internals/ws_common.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/internals/websockets_endpoint.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/internals/data_frame.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/internals/wscrypto/sha1.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/internals/wscrypto/crypto.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/internals/wscrypto/base64.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/tcp_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/tcp_server.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/tcp_socket.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/esp32/esp32_tcp.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/teensy41/teensy41_tcp_server.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/teensy41/teensy41_tcp_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/linux/linux_tcp_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/linux/linux_tcp_server.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/windows/win_tcp_server.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/windows/win_tcp_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/esp8266/esp8266_tcp.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/tiny_websockets/network/generic_esp/generic_esp_clients.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src/ArduinoWebsockets.h"
)

target_include_directories(pac-arduinowebsockets INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoWebsockets/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinowebsockets INTERFACE
    arduino-compat
)
