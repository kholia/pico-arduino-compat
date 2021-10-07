add_library(pac-seeed-arduino-rpcble INTERFACE)

target_sources(pac-seeed-arduino-rpcble INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLERemoteService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLECharacteristic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEScan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEAdvertising.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLE2902.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEDescriptorMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEServiceMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEValue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEFreeRTOS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEDescriptor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEHIDDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEEddystoneTLM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEEddystoneURL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEDeviceDefaultCallbacks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLE2904.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLERemoteCharacteristic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLERemoteDescriptor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLECharacteristicMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEExceptions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEBeacon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEAddress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEAdvertisedDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEUUID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEService.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLECharacteristic.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEHIDDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEEddystoneURL.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEFreeRTOS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEBeacon.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLE2902.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEScan.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEUUID.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLE2904.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/HIDTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEAdvertising.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEExceptions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEAdvertisedDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEDescriptor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEEddystoneTLM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLERemoteDescriptor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/HIDKeyboardTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLEValue.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/rpcBLEDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLERemoteCharacteristic.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src/BLERemoteService.h"
)

target_include_directories(pac-seeed-arduino-rpcble INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcBLE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-seeed-arduino-rpcble INTERFACE
    arduino-compat
)
