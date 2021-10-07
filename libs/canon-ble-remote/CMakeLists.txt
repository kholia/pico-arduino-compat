add_library(pac-canon-ble-remote INTERFACE)

target_sources(pac-canon-ble-remote INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Canon-BLE-Remote/src/CanonBLERemote.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Canon-BLE-Remote/src/CanonBLERemote.h"
)

target_include_directories(pac-canon-ble-remote INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32-Canon-BLE-Remote/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-canon-ble-remote INTERFACE
    arduino-compat
)
