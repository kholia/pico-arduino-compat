add_library(pac-wificonnect-lite INTERFACE)

target_sources(pac-wificonnect-lite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnectLite/src/WiFiConnectParam.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnectLite/src/WiFiConnect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnectLite/src/WiFiConnectParam.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnectLite/src/WC_AP_HTML.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnectLite/src/WiFiConnect.h"
)

target_include_directories(pac-wificonnect-lite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiConnectLite/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wificonnect-lite INTERFACE
    arduino-compat
)
