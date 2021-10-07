add_library(pac-usb-midi INTERFACE)

target_sources(pac-usb-midi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USB-MIDI/src/USB-MIDI.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB-MIDI/src/USB-MIDI_Namespace.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB-MIDI/src/USB-MIDI_defs.h"
)

target_include_directories(pac-usb-midi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USB-MIDI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-usb-midi INTERFACE
    arduino-compat
)
