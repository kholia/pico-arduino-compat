add_library(pac-esp8266_multipart INTERFACE)

target_sources(pac-esp8266_multipart INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_multipart/ESP8266_multipart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_multipart/examples/example.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_multipart/ESP8266_multipart.h"
)

target_include_directories(pac-esp8266_multipart INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266_multipart"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266_multipart INTERFACE
    arduino-compat
)
