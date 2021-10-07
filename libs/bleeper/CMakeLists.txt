add_library(pac-bleeper INTERFACE)

target_sources(pac-bleeper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Bleeper/BleeperClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Bleeper/Bleeper+Connection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Bleeper/Bleeper+ConfigurationInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Bleeper/Bleeper+Configuration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Bleeper/Bleeper+Storage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/ConfigMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/StringConvertibleVariable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/ConfigurationDictionary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/ConfigurationInterface/WebServer/BleeperWebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/ConfigurationInterface/WebServer/ESP32/HTTPRequest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/ConfigurationInterface/WebServer/ESP32/ESP32DefaultWebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/ConfigurationInterface/WebServer/ESP8266/ESP8266DefaultWebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Observers/ConfigurationObserver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Helpers/Logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Helpers/utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Connectivity/AP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Connectivity/Connection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Connectivity/Wifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Bleeper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Bleeper/BleeperClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Bleeper/Initable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/RootConfiguration.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/StringConvertibleVariable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/ConfigurationDictionary.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/BaseConfiguration.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/ConfigMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/Configuration.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/ConfigurationMacros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Configuration/Variable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/ConfigurationInterface/ConfigurationInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/ConfigurationInterface/WebServer/WebPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/ConfigurationInterface/WebServer/BleeperWebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/ConfigurationInterface/WebServer/ESP32/ESP32DefaultWebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/ConfigurationInterface/WebServer/ESP32/HTTPRequest.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/ConfigurationInterface/WebServer/ESP8266/ESP8266DefaultWebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Storage/Storage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Storage/SPIFFSStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Storage/EEPROMHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Storage/VariablesMapStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Observers/ConfigurationObserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Observers/Observable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Helpers/utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Helpers/Logger.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Helpers/macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Connectivity/AP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Connectivity/Connection.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src/Connectivity/Wifi.h"
)

target_include_directories(pac-bleeper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Bleeper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bleeper INTERFACE
    arduino-compat
)
