add_library(pushdata_esp8266_ssl INTERFACE)

target_sources(pushdata_esp8266_ssl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ESP8266_SSL/src/Pushdata_ESP8266_SSL.h"
)

target_include_directories(pushdata_esp8266_ssl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_ESP8266_SSL/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pushdata_esp8266_ssl INTERFACE
    arduino-compat
)
