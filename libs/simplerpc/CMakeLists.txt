add_library(simplerpc INTERFACE)

target_sources(simplerpc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/simpleRPC/src/plugins/half_duplex/stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simpleRPC/src/defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/simpleRPC/src/simpleRPC.h"
  "${CMAKE_CURRENT_LIST_DIR}/simpleRPC/src/plugins/half_duplex/stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/simpleRPC/examples/wifi/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/simpleRPC/examples/esp32/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/simpleRPC/tests/plugins/SoftwareSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/simpleRPC/tests/plugins/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/simpleRPC/tests/plugins/Wire.h"
)

target_include_directories(simplerpc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/simpleRPC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simplerpc INTERFACE
    arduino-compat
)
