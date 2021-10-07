add_library(pac-musicwithoutdelay INTERFACE)

target_sources(pac-musicwithoutdelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/src/synthEngine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/src/SDpiston.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/src/MusicWithoutDelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/src/NoodleSynth.h"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/src/synthEngine.h"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/src/tables.h"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/src/SDpiston.h"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/src/Noodles_Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/src/MusicWithoutDelay.h"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/examples/MIDI/Noodle_MIDI_Synth/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/examples/MIDI/Noodle_MIDI_Synth/MIDI_callbacks.h"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/examples/MIDI/Noodle_MIDI_Synth_32u4/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/examples/MIDI/Noodle_MIDI_Synth_32u4/MIDI_callbacks.h"
)

target_include_directories(pac-musicwithoutdelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MusicWithoutDelay-LIbrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-musicwithoutdelay INTERFACE
    arduino-compat
    pac-sd
)
