add_library(pac-arduino-websocket-fast INTERFACE)

target_sources(pac-arduino-websocket-fast INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Websocket-Fast/src/WebSocketClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Websocket-Fast/src/Base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Websocket-Fast/src/sha1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Websocket-Fast/src/WebSocketClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Websocket-Fast/src/Base64.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Websocket-Fast/src/sha1.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Websocket-Fast/src/global.h"
)

target_include_directories(pac-arduino-websocket-fast INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Websocket-Fast/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-websocket-fast INTERFACE
    arduino-compat
)
