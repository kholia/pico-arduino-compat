add_library(pac-ardosc INTERFACE)

target_sources(pac-ardosc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCArg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/Pattern.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCDecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/ArdOSC.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCCommon/Pattern.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCCommon/OSCDecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCCommon/OSCArg.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCCommon/OSCMessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCCommon/OSCcommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCCommon/OSCEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCCommon/OSCServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src/OSCCommon/OSCClient.h"
)

target_include_directories(pac-ardosc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArdOSC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ardosc INTERFACE
    arduino-compat
)
