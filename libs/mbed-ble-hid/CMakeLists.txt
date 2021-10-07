add_library(pac-mbed-ble-hid INTERFACE)

target_sources(pac-mbed-ble-hid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/Mbed_BLE_HID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/services/HIDGamepadService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/services/HIDKeyboardService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/services/HIDMouseService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/Nano33BleHID.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/signal_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/Mbed_BLE_HID.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/services/HIDGamepadService.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/services/HIDService.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/services/HIDMouseService.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/services/HIDKeyboardService.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src/services/keylayouts.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/examples/ble_mouse/AnalogJoystick.h"
)

target_include_directories(pac-mbed-ble-hid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mbed-ble-hid/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mbed-ble-hid INTERFACE
    arduino-compat
)
