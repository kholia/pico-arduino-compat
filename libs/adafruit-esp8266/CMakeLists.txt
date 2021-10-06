add_library(adafruit-esp8266 INTERFACE)

target_sources(adafruit-esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ESP8266/Adafruit_ESP8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ESP8266/Adafruit_ESP8266.h"
)

target_include_directories(adafruit-esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ESP8266"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-esp8266 INTERFACE
    arduino-compat
)
