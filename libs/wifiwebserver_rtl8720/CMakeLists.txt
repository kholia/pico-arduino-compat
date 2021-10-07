add_library(pac-wifiwebserver_rtl8720 INTERFACE)

target_sources(pac-wifiwebserver_rtl8720 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/libb64/base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/RTL8720_HTTPClient/RTL8720_URLEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/RTL8720_HTTPClient/RTL8720_HttpClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/RTL8720_HTTPClient/RTL8720_WebSocketClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/utility/RingBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/libb64/cencode.c"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/libb64/cdecode.c"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/Parsing_RTL8720-impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/WiFiWebServer_RTL8720.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/WiFiWebServer_RTL8720-impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/RTL8720HttpClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/libb64/cdecode.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/libb64/base64.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/libb64/cencode.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/RTL8720_HTTPClient/RTL8720_HttpClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/RTL8720_HTTPClient/RTL8720_WebSocketClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/RTL8720_HTTPClient/RTL8720_URLEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/utility/RingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/utility/WiFiDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/utility/mimetable.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/utility/RequestHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src/utility/RequestHandlersImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/UdpSendReceive/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/WebServer/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/CustomHeader/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/BasicAuthGet/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/SimplePut/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/SimpleHTTPExample/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/SimpleGet/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/HueBlink/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/SimpleDelete/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/SimplePost/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/SimpleWebSocket/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/DweetGet/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/PostWithHeaders/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HTTPClient/DweetPost/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/UdpNTPClient/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/ScanNetworks/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HttpBasicAuth/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HelloServer2/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/ConnectWPA/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/HelloServer/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/WebClientRepeating/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/MQTTClient_Auth/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/WebClient/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/PostServer/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/SimpleAuthentication/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/AdvancedWebServer/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/MQTTClient_Basic/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/WiFiUdpNtpClient/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/examples/MQTT_ThingStream/defines.h"
)

target_include_directories(pac-wifiwebserver_rtl8720 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiWebServer_RTL8720/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wifiwebserver_rtl8720 INTERFACE
    arduino-compat
)
