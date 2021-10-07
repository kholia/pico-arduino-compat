add_library(pac-telnetstream INTERFACE)

target_sources(pac-telnetstream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream/src/TelnetPrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream/src/TelnetStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream/src/TelnetStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream/src/NetTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream/src/ArduinoWiFiServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream/src/TelnetPrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream/examples/TelnetStreamEsp32Test/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream/examples/TelnetStreamSPIWiFiTest/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelnetStream/examples/TelnetStreamEsp8266Test/arduino_secrets.h"
)

target_include_directories(pac-telnetstream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TelnetStream/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-telnetstream INTERFACE
    arduino-compat
)
