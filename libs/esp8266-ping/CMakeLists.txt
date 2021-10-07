add_library(pac-esp8266-ping INTERFACE)

target_sources(pac-esp8266-ping INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-ping/src/Pinger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-ping/src/PingerResponse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-ping/src/PingerResponse.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-ping/src/Pinger.h"
)

target_include_directories(pac-esp8266-ping INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-ping/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266-ping INTERFACE
    arduino-compat
)
