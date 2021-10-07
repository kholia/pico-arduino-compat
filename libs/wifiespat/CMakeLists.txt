add_library(pac-wifiespat INTERFACE)

target_sources(pac-wifiespat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiSSLClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiEspAtBuffManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiEspAtBuffStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/utility/EspAtDrv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/utility/EspAtDrvLogging.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiEspAtBuffStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiSSLClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiEspAT.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiEspAtConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/WiFiEspAtBuffManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/utility/EspAtDrv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/utility/EspAtDrvLogging.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src/utility/EspAtDrvTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/examples/Tools/SetupPersistentWiFiConnection/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/examples/Tools/SetupPersistentAP/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/examples/Advanced/TemporaryWiFiConnect/arduino_secrets.h"
)

target_include_directories(pac-wifiespat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiEspAT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wifiespat INTERFACE
    arduino-compat
)
