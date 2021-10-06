add_library(ping-arduino INTERFACE)

target_sources(ping-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ping-arduino/src/ping1d.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ping-arduino/src/ping_ping360.h"
  "${CMAKE_CURRENT_LIST_DIR}/ping-arduino/src/ping_ping1d.h"
  "${CMAKE_CURRENT_LIST_DIR}/ping-arduino/src/ping_parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/ping-arduino/src/ping1d.h"
  "${CMAKE_CURRENT_LIST_DIR}/ping-arduino/src/pingmessage_ping1D.h"
  "${CMAKE_CURRENT_LIST_DIR}/ping-arduino/src/pingmessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ping-arduino/src/ping_message.h"
  "${CMAKE_CURRENT_LIST_DIR}/ping-arduino/src/pingmessage_all.h"
)

target_include_directories(ping-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ping-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ping-arduino INTERFACE
    arduino-compat
)
