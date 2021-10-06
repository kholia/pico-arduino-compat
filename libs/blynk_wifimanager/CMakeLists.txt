add_library(blynk_wifimanager INTERFACE)

target_sources(blynk_wifimanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/esp32s2_WebServer_Patch/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/src/BlynkSimpleEsp8266_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/src/BlynkSimpleEsp8266_SSL_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/src/BlynkSimpleEsp32_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/src/BlynkSimpleEsp32_SSL_WM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/src/certs/blynkcloud_der.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/Blynk_WM_Template/MY_BLYNK_CREDENTIALS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/Blynk_WM_Template/MY_WIFI_CREDENTIALS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/Blynk_WM_Template/ESP_LED_BUILTINS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/Blynk_WM_Template/MY_BLYNK_COLORS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP32_SSL/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP32_SSL/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP32_SSL/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_Config/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_Config/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_Config/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP8266/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP8266/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP8266/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_MRD_ForcedConfig/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_MRD_ForcedConfig/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_MRD_ForcedConfig/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/AM2315_ESP8266/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/AM2315_ESP8266/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/AM2315_ESP8266/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_MRD_Config/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_MRD_Config/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_MRD_Config/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_Config/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_Config/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_Config/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP8266_Debug/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP8266_Debug/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP8266_Debug/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_MRD_Config/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_MRD_Config/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_MRD_Config/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_ForcedConfig/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_ForcedConfig/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_ForcedConfig/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_ForcedConfig/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_ForcedConfig/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP32WM_ForcedConfig/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP8266_SSL/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP8266_SSL/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP8266_SSL/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/AM2315_ESP32_SSL/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/AM2315_ESP32_SSL/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/AM2315_ESP32_SSL/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_MRD_ForcedConfig/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_MRD_ForcedConfig/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/ESP8266WM_MRD_ForcedConfig/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP32/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP32/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/examples/DHT11ESP32/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/esp32s2_WebServer_Patch/WebServer.h"
)

target_include_directories(blynk_wifimanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Blynk_WM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(blynk_wifimanager INTERFACE
    arduino-compat
)
