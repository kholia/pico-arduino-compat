add_library(pac-asciimassage INTERFACE)

target_sources(pac-asciimassage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/src/AsciiMassagePacker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/src/AsciiMassageParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/extras/test/outdated/udpTest/EzEsp8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/extras/test/outdated/udpTest/AsciiMassengerUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/src/AsciiMassage.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/src/AsciiMassagePacker.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/src/AsciiMassageParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/src/Massage/MassagePacker.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/src/Massage/MassageParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/examples/AsciiMassage_websocket_server/esp8266AP.h"
)

target_include_directories(pac-asciimassage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsciiMassage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asciimassage INTERFACE
    arduino-compat
)
