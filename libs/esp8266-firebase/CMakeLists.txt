add_library(esp8266-firebase INTERFACE)

target_sources(esp8266-firebase INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266Firebase/ESP8266Firebase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266Firebase/ESP8266Firebase.h"
)

target_include_directories(esp8266-firebase INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266Firebase"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp8266-firebase INTERFACE
    arduino-compat
)
