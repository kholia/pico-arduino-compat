add_library(wireguard-esp32 INTERFACE)

target_sources(wireguard-esp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/WireGuard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/wireguard-platform.c"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/wireguardif.c"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/wireguard.c"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto.c"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/poly1305-donna.c"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/chacha20poly1305.c"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/x25519.c"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/blake2s.c"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/chacha20.c"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/wireguard-platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto.h"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/wireguard.h"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/wireguardif.h"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/WireGuard-ESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/poly1305-donna-32.h"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/blake2s.h"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/chacha20poly1305.h"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/x25519.h"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/poly1305-donna.h"
  "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src/crypto/refc/chacha20.h"
)

target_include_directories(wireguard-esp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WireGuard-ESP32-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wireguard-esp32 INTERFACE
    arduino-compat
)
