add_library(md_ym2413 INTERFACE)

target_sources(md_ym2413 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_YM2413/src/MD_YM2413_hw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_YM2413/src/MD_YM2413.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_YM2413/src/MD_YM2413.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_YM2413/src/MD_YM2413_lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_YM2413/examples/MD_YM2413_Custom/midi_instruments.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_YM2413/examples/MD_YM2413_Custom/midi_drums.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_YM2413/examples/MD_YM2413_RTTTL_Player/MD_YM2413_RTTTL_Player.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_YM2413/examples/MD_YM2413_MIDI_Player/MD_YM2413_MIDI_Map.h"
)

target_include_directories(md_ym2413 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_YM2413/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_ym2413 INTERFACE
    arduino-compat
)
