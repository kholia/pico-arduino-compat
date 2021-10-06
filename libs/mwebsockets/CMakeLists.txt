add_library(mwebsockets INTERFACE)

target_sources(mwebsockets INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/WebSocket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/WebSocketClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/WebSocketServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/utility.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/Hash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/BlockCipher.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/SHA1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/Cipher.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/Crypto.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/base64/Base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/WebSocketClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/WebSocketServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/utility.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/WebSocket.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/SHA1.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/Crypto.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/BlockCipher.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/Hash.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/CryptoLegacy.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/Cipher.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/utility/EndianUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/utility/RotateUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/utility/ProgMemUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/CryptoLegacy/utility/LimbUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src/base64/Base64.h"
)

target_include_directories(mwebsockets INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mWebSockets/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mwebsockets INTERFACE
    arduino-compat
)
