add_library(uhs2-midi INTERFACE)

target_sources(uhs2-midi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-UHS2MIDI/src/UHS2-MIDI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-UHS2MIDI/src/UHS2-MIDI_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-UHS2MIDI/src/UHS2-MIDI_Namespace.h"
)

target_include_directories(uhs2-midi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-UHS2MIDI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(uhs2-midi INTERFACE
    arduino-compat
)
