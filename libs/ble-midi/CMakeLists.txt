add_library(pac-ble-midi INTERFACE)

target_sources(pac-ble-midi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src/BLEMIDI_Transport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src/BLEMIDI_Namespace.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src/BLEMIDI_Defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src/BLEMIDI_Transport.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src/BLEMIDI_Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src/hardware/BLEMIDI_ArduinoBLE.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src/hardware/BLEMIDI_ESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src/hardware/BLEMIDI_nRF52.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src/hardware/BLEMIDI_Client_ESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src/hardware/BLEMIDI_ESP32_NimBLE.h"
)

target_include_directories(pac-ble-midi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-BLE-MIDI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ble-midi INTERFACE
    arduino-compat
)
