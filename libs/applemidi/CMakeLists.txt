add_library(pac-applemidi INTERFACE)

target_sources(pac-applemidi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/test/NoteOn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/rtpMIDI_Parser_MidiCommandSection.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/rtpMIDI_Parser_JournalSection.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/test/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/test/IPAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/test/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/rtpMIDI_Clock.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/rtp_Defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI_Namespace.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI_Defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/rtpMIDI_Defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI_PlatformBegin.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI_Participant.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI_Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/rtpMIDI_Parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI_Parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI_PlatformEnd.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/AppleMIDI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/utility/Deque.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src/utility/endian.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/examples/wESP32_NoteOnOffEverySec/ETH_Helper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/examples/ESP32_W5500_Callbacks/ETH_Helper.h"
)

target_include_directories(pac-applemidi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AppleMidi-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-applemidi INTERFACE
    arduino-compat
)
