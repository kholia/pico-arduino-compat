add_library(wifiman INTERFACE)

target_sources(wifiman INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/ESP8266OTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/WiFiMan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/Boot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/themes/Theme-template.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/themes/vscode/Theme.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/themes/YoRHa-default/Theme.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/CusomConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/Theme.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/ESP8266OTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/DebugHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/WebUI.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/WiFiMan.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src/Boot.h"
)

target_include_directories(wifiman INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiMan/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wifiman INTERFACE
    arduino-compat
)
