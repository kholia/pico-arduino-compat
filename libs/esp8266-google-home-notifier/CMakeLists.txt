add_library(pac-esp8266-google-home-notifier INTERFACE)

target_sources(pac-esp8266-google-home-notifier INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/ESP8266mDNS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/esp8266-google-home-notifier.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/pb_decode.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/cast_channel.pb.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/pb_common.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/pb_encode.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/esp8266-google-home-notifier.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/pb_encode.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/cast_channel.pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/ESP8266mDNS.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/esp_sdk_version.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/pb_decode.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src/pb_common.h"
)

target_include_directories(pac-esp8266-google-home-notifier INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-home-notifier/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266-google-home-notifier INTERFACE
    arduino-compat
)
