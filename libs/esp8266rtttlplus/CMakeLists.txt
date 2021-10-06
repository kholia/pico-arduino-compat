add_library(esp8266rtttlplus INTERFACE)

target_sources(esp8266rtttlplus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266RTTTLPlus/src/ESP8266RTTTLPlus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266RTTTLPlus/src/ESP8266RTTTLPlus.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266RTTTLPlus/examples/RTTTLPlayer/rpwebpage.h"
)

target_include_directories(esp8266rtttlplus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266RTTTLPlus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp8266rtttlplus INTERFACE
    arduino-compat
)
