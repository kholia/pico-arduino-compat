add_library(seeed-arduino-rpcwifi INTERFACE)

target_sources(seeed-arduino-rpcwifi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiAP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/rpcPing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/DNSServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/HTTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiGeneric.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/Parsing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiSTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiClientSecure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/ETH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/ping.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiScan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiMulti.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/detail/mimetable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiAP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiMulti.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/DNSServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiType.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/ping.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiGeneric.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiClientSecure.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiScan.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/rpcWiFiClientSecure.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiSTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/rpcPing.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/rpcWiFiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/HTTPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/HTTP_Method.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/ETH.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/rpcWiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/WiFiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/detail/mimetable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/detail/RequestHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src/detail/RequestHandlersImpl.h"
)

target_include_directories(seeed-arduino-rpcwifi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcWiFi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(seeed-arduino-rpcwifi INTERFACE
    arduino-compat
)
