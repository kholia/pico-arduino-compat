add_library(esp8266restclient INTERFACE)

target_sources(esp8266restclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266RestClient/RestClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266RestClient/RestClient.h"
)

target_include_directories(esp8266restclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266RestClient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp8266restclient INTERFACE
    arduino-compat
)
