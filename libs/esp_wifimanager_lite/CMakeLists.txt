add_library(pac-esp_wifimanager_lite INTERFACE)

target_sources(pac-esp_wifimanager_lite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/esp32s2_WebServer_Patch/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/src/ESP_WiFiManager_Lite_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/src/ESP_WiFiManager_Lite.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/examples/ESP_WiFi_MQTT/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/examples/ESP_WiFi_MQTT/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/examples/ESP_WiFi_MQTT/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/examples/ESP_WiFi/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/examples/ESP_WiFi/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/examples/ESP_WiFi/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/esp32s2_WebServer_Patch/WebServer.h"
)

target_include_directories(pac-esp_wifimanager_lite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager_Lite/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp_wifimanager_lite INTERFACE
    arduino-compat
)
