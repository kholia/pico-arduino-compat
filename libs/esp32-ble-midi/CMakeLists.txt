add_library(pac-esp32-ble-midi INTERFACE)

target_sources(pac-esp32-ble-midi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/utility/Midi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/utility/BLEMidiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/utility/Debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/utility/BLEMidiServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/utility/BLEMidiBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/test/timestamp/timestamp.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/BLEMidi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/utility/BLEMidiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/utility/Midi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/utility/BLEMidiBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/utility/Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src/utility/BLEMidiServer.h"
)

target_include_directories(pac-esp32-ble-midi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32-BLE-MIDI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32-ble-midi INTERFACE
    arduino-compat
)
