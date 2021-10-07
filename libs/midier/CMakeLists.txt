add_library(pac-midier INTERFACE)

target_sources(pac-midier INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/midi/midi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/layer/layer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/rhythm/rhythm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/debug/debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/scale/scale.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/sequencer/sequencer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/config/config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/style/style.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/layers/layers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/time/time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/triad/triad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/mode/mode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/Midier.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/midi/midi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/layer/layer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/rhythm/rhythm.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/debug/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/note/note.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/scale/scale.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/degree/degree.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/quality/quality.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/sequencer/sequencer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/interval/interval.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/config/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/octave/octave.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/style/style.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/layers/layers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/time/time.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/triad/triad.h"
  "${CMAKE_CURRENT_LIST_DIR}/Midier/src/mode/mode.h"
)

target_include_directories(pac-midier INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Midier/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-midier INTERFACE
    arduino-compat
)
