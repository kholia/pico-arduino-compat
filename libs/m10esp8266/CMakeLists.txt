add_library(pac-m10esp8266 INTERFACE)

target_sources(pac-m10esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10ESP8266/src/M10ESP8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10ESP8266/src/M10ESP8266.h"
)

target_include_directories(pac-m10esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10ESP8266/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m10esp8266 INTERFACE
    arduino-compat
)
