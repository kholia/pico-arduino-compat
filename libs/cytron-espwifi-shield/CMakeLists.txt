add_library(pac-cytron-espwifi-shield INTERFACE)

target_sources(pac-cytron-espwifi-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CytronWiFiShield/src/CytronWiFiServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CytronWiFiShield/src/CytronWiFiShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CytronWiFiShield/src/CytronWiFiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CytronWiFiShield/src/CytronWiFiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/CytronWiFiShield/src/CytronWiFiServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/CytronWiFiShield/src/CytronWiFiShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/CytronWiFiShield/src/util/ESP8266_AT.h"
)

target_include_directories(pac-cytron-espwifi-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CytronWiFiShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cytron-espwifi-shield INTERFACE
    arduino-compat
)
