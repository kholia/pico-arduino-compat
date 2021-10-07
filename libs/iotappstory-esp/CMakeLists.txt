add_library(pac-iotappstory-esp INTERFACE)

target_sources(pac-iotappstory-esp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/IOTAppStory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/ConfigServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/WiFiConnector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/UpdateNextionClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/UpdateESPClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp32/NtpTimeSync.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp32/BoardInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp32/CallServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp8266/NtpTimeSync.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp8266/BoardInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp8266/CallServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/ardmkr/BoardInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/serialFeedback_EN.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/serialFeedback_NL.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/IOTAppStory.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/includes.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/UpdateClassVirt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/WiFiConnector.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/ConfigServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/UpdateESPClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/UpdateNextionClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp32/NtpTimeSync.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp32/BoardInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp32/CallServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp8266/NtpTimeSync.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp8266/BoardInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/espressif/esp8266/CallServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src/ardmkr/BoardInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/examples/LOLIN(WEMOS) D1 mini/Wemos-IASLoader/logo.h"
)

target_include_directories(pac-iotappstory-esp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iotappstory-esp INTERFACE
    arduino-compat
)
