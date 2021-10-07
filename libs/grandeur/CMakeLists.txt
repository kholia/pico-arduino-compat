add_library(pac-grandeur INTERFACE)

target_sources(pac-grandeur INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Datastore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Callback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/DuplexHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Grandeur.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/WebSockets.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/SocketIOclient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/WebSocketsClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/WebSocketsServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Arduino_JSON/JSONVar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Arduino_JSON/JSON.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/libb64/cencode.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/libb64/cdecode.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/libsha1/libsha1.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Arduino_JSON/cjson/cJSON.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Grandeur.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Var.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Callback.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/DuplexHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/WebSocketsVersion.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/WebSocketsServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/WebSockets4WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/WebSockets.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/WebSocketsClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/SocketIOclient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/libb64/cencode_inc.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/libb64/cdecode_inc.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/arduinoWebSockets/libsha1/libsha1.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Arduino_JSON/JSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Arduino_JSON/Arduino_JSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Arduino_JSON/JSONVar.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/Arduino_JSON/cjson/cJSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/EventEmitter/Listener.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src/EventEmitter/EventEmitter.h"
)

target_include_directories(pac-grandeur INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-sdk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grandeur INTERFACE
    arduino-compat
)
