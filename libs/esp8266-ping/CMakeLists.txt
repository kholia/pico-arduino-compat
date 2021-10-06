add_library(esp8266-ping INTERFACE)

target_sources(esp8266-ping INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-ping/src/Pinger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-ping/src/PingerResponse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-ping/src/PingerResponse.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-ping/src/Pinger.h"
)

target_include_directories(esp8266-ping INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-ping/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp8266-ping INTERFACE
    arduino-compat
)
