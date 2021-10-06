add_library(asyncwebserver_wt32_eth01 INTERFACE)

target_sources(asyncwebserver_wt32_eth01 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/AsyncWebServer_WT32_ETH01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/AsyncEventSource.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/WebRequest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/WebAuthentication.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/WebResponses.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/WebHandlers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/AsyncWebSocket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/WT32_ETH01_SPIFFSEditor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/StringArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/AsyncWebServer_WT32_ETH01.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/AsyncWebSynchronization.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/AsyncEventSource.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/AsyncWebServer_WT32_ETH01_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/WebHandlerImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/AsyncJson.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/WebResponseImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/AsyncWebSocket.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/WebAuthentication.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src/WT32_ETH01_SPIFFSEditor.h"
)

target_include_directories(asyncwebserver_wt32_eth01 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncWebServer_WT32_ETH01/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncwebserver_wt32_eth01 INTERFACE
    arduino-compat
)
