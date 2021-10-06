add_library(n64pad INTERFACE)

target_sources(n64pad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/N64PadForArduino/src/GCPad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/N64PadForArduino/src/N64Pad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/N64PadForArduino/src/protocol/N64PadProtocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/N64PadForArduino/src/N64Pad.h"
  "${CMAKE_CURRENT_LIST_DIR}/N64PadForArduino/src/GCPad.h"
  "${CMAKE_CURRENT_LIST_DIR}/N64PadForArduino/src/protocol/usbpause.h"
  "${CMAKE_CURRENT_LIST_DIR}/N64PadForArduino/src/protocol/N64PadProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/N64PadForArduino/src/protocol/pinconfig.h"
)

target_include_directories(n64pad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/N64PadForArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(n64pad INTERFACE
    arduino-compat
)
