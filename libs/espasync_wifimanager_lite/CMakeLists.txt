add_library(espasync_wifimanager_lite INTERFACE)

target_sources(espasync_wifimanager_lite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/esp32c3_ESPAsyncWebServer_Patch/AsyncWebSocket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/esp32s2_WebServer_Patch/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/src/ESPAsync_WiFiManager_Lite.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/src/ESPAsync_WiFiManager_Lite_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/examples/ESPAsync_WiFi_MQTT/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/examples/ESPAsync_WiFi_MQTT/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/examples/ESPAsync_WiFi_MQTT/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/examples/ESPAsync_WiFi/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/examples/ESPAsync_WiFi/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/examples/ESPAsync_WiFi/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/esp32s2_WebServer_Patch/WebServer.h"
)

target_include_directories(espasync_wifimanager_lite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPAsync_WiFiManager_Lite/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espasync_wifimanager_lite INTERFACE
    arduino-compat
)
