add_library(pac-md_midifile INTERFACE)

target_sources(pac-md_midifile INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_MIDIFile/src/MD_MIDITrack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MIDIFile/src/MD_MIDIHelper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MIDIFile/src/MD_MIDIFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MIDIFile/src/MD_MIDIFile.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MIDIFile/src/MD_MIDIHelper.h"
)

target_include_directories(pac-md_midifile INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_MIDIFile/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_midifile INTERFACE
    arduino-compat
)
