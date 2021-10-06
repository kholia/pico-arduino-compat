add_library(webserver_wt32_eth01 INTERFACE)

target_sources(webserver_wt32_eth01 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/LibraryPatches/esp32/cores/esp32/Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/src/WebServer_WT32_ETH01_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/src/WebServer_WT32_ETH01_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/src/WebServer_WT32_ETH01.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/examples/SSL/MQTTClient_SSL_Auth/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/examples/SSL/MQTTS_ThingStream/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/examples/SSL/WebClientMulti_SSL/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/examples/SSL/WebClient_SSL/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/examples/SSL/MQTTClient_SSL/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/examples/SSL/MQTTClient_SSL_Complex/certificates.h"
)

target_include_directories(webserver_wt32_eth01 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WebServer_WT32_ETH01/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(webserver_wt32_eth01 INTERFACE
    arduino-compat
)
