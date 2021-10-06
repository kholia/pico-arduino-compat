add_library(midicontroller INTERFACE)

target_sources(midicontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDIdrum.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDIbutton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDIenc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDIpot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDItouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDIdrum.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDIbutton.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDIpot.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDIenc.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDIcontroller.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src/MIDItouch.h"
)

target_include_directories(midicontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MIDIcontroller/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(midicontroller INTERFACE
    arduino-compat
)
