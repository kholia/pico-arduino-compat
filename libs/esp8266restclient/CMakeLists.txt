add_library(pac-esp8266restclient INTERFACE)

target_sources(pac-esp8266restclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266RestClient/RestClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266RestClient/RestClient.h"
)

target_include_directories(pac-esp8266restclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266RestClient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266restclient INTERFACE
    arduino-compat
)
