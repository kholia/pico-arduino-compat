add_library(espasync_wifimanager INTERFACE)

target_sources(espasync_wifimanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src_cpp/ESPAsync_WiFiManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/esp32c3_ESPAsyncWebServer_Patch/WebAuthentication.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/esp32c3_ESPAsyncWebServer_Patch/AsyncWebSocket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/esp32s2_WebServer_Patch/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src_cpp/ESPAsync_WiFiManager_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src_cpp/ESPAsync_WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src_cpp/utils/TZ.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src/ESPAsync_WiFiManager_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src/ESPAsync_WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src/ESPAsync_WiFiManager-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src/utils/TZ.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src_h/ESPAsync_WiFiManager_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src_h/ESPAsync_WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src_h/ESPAsync_WiFiManager-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src_h/utils/TZ.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/esp32s2_WebServer_Patch/WebServer.h"
)

target_include_directories(espasync_wifimanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espasync_wifimanager INTERFACE
    arduino-compat
)
