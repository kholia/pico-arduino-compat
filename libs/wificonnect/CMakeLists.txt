add_library(wificonnect INTERFACE)

target_sources(wificonnect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnect/src/WiFiConnectOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnect/src/WiFiConnectParam.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnect/src/WiFiConnect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnect/src/WiFiConnectParam.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnect/src/Roboto_Font.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnect/src/WC_AP_HTML.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnect/src/imagedata.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnect/src/WiFiConnect.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiConnect/src/WiFiConnectOLED.h"
)

target_include_directories(wificonnect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiConnect/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wificonnect INTERFACE
    arduino-compat
)
