add_library(pac-mbed-ble-mouse INTERFACE)

target_sources(pac-mbed-ble-mouse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mbed-BLE-Mouse/src/HIDMouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-BLE-Mouse/src/BLE_HID/HIDServiceBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-BLE-Mouse/src/BLE_HID/mouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-BLE-Mouse/src/HIDMouse.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-BLE-Mouse/src/BLE_HID/HIDServiceBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-BLE-Mouse/src/BLE_HID/mouse.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-BLE-Mouse/src/BLE_HID/HID_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/mbed-BLE-Mouse/src/BLE_HID/HIDDeviceInformationService.h"
)

target_include_directories(pac-mbed-ble-mouse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mbed-BLE-Mouse/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mbed-ble-mouse INTERFACE
    arduino-compat
)
