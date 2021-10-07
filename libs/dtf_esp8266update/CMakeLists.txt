add_library(pac-dtf_esp8266update INTERFACE)

target_sources(pac-dtf_esp8266update INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_esp8266_update/src/DTF_ESP8266Update.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_esp8266_update/src/DTF_ESP8266Update.h"
)

target_include_directories(pac-dtf_esp8266update INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_esp8266_update/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dtf_esp8266update INTERFACE
    arduino-compat
)
