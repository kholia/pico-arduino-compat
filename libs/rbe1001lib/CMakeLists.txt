add_library(rbe1001lib INTERFACE)

target_sources(rbe1001lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/WebPage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/Rangefinder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/Motor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/IRdecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/SPIFFSEditor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/AsyncEventSource.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/WebRequest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/WebAuthentication.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/WebResponses.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/WebHandlers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/AsyncWebSocket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/AsyncTCP/AsyncTCP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/WebPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/button.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/RBE1001Lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/Rangefinder.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/staticFiles.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/Motor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/IRdecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/static/static.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/StringArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/SPIFFSEditor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/ESPAsyncWebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/AsyncWebSynchronization.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/AsyncEventSource.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/WebHandlerImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/AsyncJson.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/WebResponseImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/AsyncWebSocket.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/ESPAsyncWebServer/WebAuthentication.h"
  "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src/AsyncTCP/AsyncTCP.h"
)

target_include_directories(rbe1001lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBE1001Lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rbe1001lib INTERFACE
    arduino-compat
)
