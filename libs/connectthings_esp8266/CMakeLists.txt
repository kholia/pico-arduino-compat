add_library(connectthings_esp8266 INTERFACE)

target_sources(connectthings_esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ConnectThings_ESP8266/src/ConnectThings_ESP8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConnectThings_ESP8266/src/ConnectThings_ESP8266.h"
)

target_include_directories(connectthings_esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ConnectThings_ESP8266/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(connectthings_esp8266 INTERFACE
    arduino-compat
)
