add_library(pac-esp32-ble-arduino INTERFACE)

target_sources(pac-esp32-ble-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLERemoteService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLECharacteristic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEScan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEAdvertising.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLE2902.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEDescriptorMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEServiceMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEValue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEDescriptor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEHIDDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEEddystoneTLM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEEddystoneURL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLE2904.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLERemoteCharacteristic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLERemoteDescriptor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLECharacteristicMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEExceptions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEBeacon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLESecurity.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/FreeRTOS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEAddress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEAdvertisedDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/GeneralUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEUUID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEService.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLECharacteristic.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEHIDDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/FreeRTOS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEEddystoneURL.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/GeneralUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEBeacon.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLE2902.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLESecurity.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEScan.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEUUID.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLE2904.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/HIDTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEAdvertising.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEExceptions.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEAdvertisedDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEDescriptor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEEddystoneTLM.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLERemoteDescriptor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/HIDKeyboardTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLEValue.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLERemoteCharacteristic.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src/BLERemoteService.h"
)

target_include_directories(pac-esp32-ble-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32_BLE_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32-ble-arduino INTERFACE
    arduino-compat
)
