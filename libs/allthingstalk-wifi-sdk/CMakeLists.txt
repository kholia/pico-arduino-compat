add_library(allthingstalk-wifi-sdk INTERFACE)

target_sources(allthingstalk-wifi-sdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/WifiCredentials.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/BinaryPayload.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/GeoLocation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/CborPayload.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/PubSubClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/Credentials.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/CborDecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/CborEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/AllThingsTalk_WiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/DeviceConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/CborDecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/PubSubClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/ATT_MKR1010.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/DeviceConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/ATT_ESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/Payload.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/Options.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/BinaryPayload.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/CborEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/WifiCredentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/GeoLocation.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/CborPayload.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src/AllThingsTalk_WiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/examples/SendJsonSimplestSeparateCredentials/keys.h"
)

target_include_directories(allthingstalk-wifi-sdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-wifi-sdk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(allthingstalk-wifi-sdk INTERFACE
    arduino-compat
)
