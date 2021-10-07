add_library(pac-esp_wifimanager INTERFACE)

target_sources(pac-esp_wifimanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src_cpp/ESP_WiFiManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/esp32s2_WebServer_Patch/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src_cpp/ESP_WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src_cpp/ESP_WiFiManager_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src_cpp/utils/TZ.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src/ESP_WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src/ESP_WiFiManager_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src/ESP_WiFiManager-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src/utils/TZ.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src_h/ESP_WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src_h/ESP_WiFiManager_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src_h/ESP_WiFiManager-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src_h/utils/TZ.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/esp32s2_WebServer_Patch/WebServer.h"
)

target_include_directories(pac-esp_wifimanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_WiFiManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp_wifimanager INTERFACE
    arduino-compat
)
