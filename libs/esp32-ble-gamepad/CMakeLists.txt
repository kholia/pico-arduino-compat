add_library(pac-esp32-ble-gamepad INTERFACE)

target_sources(pac-esp32-ble-gamepad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-Gamepad/BleConnectionStatus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-Gamepad/BleGamepad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-Gamepad/BleGamepad.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-Gamepad/BleConnectionStatus.h"
)

target_include_directories(pac-esp32-ble-gamepad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-Gamepad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32-ble-gamepad INTERFACE
    arduino-compat
)
