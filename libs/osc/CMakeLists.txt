add_library(pac-osc INTERFACE)

target_sources(pac-osc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCBundle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCBoards.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/SLIPEncodedSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/SLIPEncodedUSBSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCTiming.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCMatch.c"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCBoards.h"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCMatch.h"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCMessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCTiming.h"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/SLIPEncodedSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCData.h"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/OSCBundle.h"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/SLIPEncodedUSBSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/test/OSCMessage_encode_decode_test/TestPrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/OSC/test/OSCBundle_test/TestPrint.h"
)

target_include_directories(pac-osc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OSC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-osc INTERFACE
    arduino-compat
)
