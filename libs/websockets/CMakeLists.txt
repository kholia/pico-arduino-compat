add_library(websockets INTERFACE)

target_sources(websockets INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/WebSockets.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/SocketIOclient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/WebSocketsClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/WebSocketsServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/examples/particle/ParticleWebSocketClient/application.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/libb64/cencode.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/libb64/cdecode.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/libsha1/libsha1.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/WebSocketsVersion.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/WebSocketsServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/WebSockets4WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/WebSockets.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/WebSocketsClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/SocketIOclient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/libb64/cencode_inc.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/libb64/cdecode_inc.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src/libsha1/libsha1.h"
)

target_include_directories(websockets INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduinoWebSockets/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(websockets INTERFACE
    arduino-compat
)
