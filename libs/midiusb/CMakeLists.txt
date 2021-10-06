add_library(midiusb INTERFACE)

target_sources(midiusb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MIDIUSB/src/MIDIUSB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIUSB/src/MIDIUSB_Defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIUSB/src/pitchToNote.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIUSB/src/frequencyToNote.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIUSB/src/MIDIUSB.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIUSB/src/pitchToFrequency.h"
)

target_include_directories(midiusb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MIDIUSB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(midiusb INTERFACE
    arduino-compat
)
