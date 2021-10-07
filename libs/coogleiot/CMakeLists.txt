add_library(pac-coogleiot INTERFACE)

target_sources(pac-coogleiot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/CoogleIOTWebserver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/CoogleEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/CoogleIOT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/DNSServer/DNSServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/LUrlParser/LUrlParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/CoogleIOTConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/WiFiClientPrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/CoogleIOT.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/ArduinoJson.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/CoogleIOTWebserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/CoogleEEPROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/EEPROM_map.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/DNSServer/DNSServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/LUrlParser/LUrlParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/webpages/jquery-3.2.1.min.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/webpages/jquery-3.2.1.slim.min.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/webpages/404.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/webpages/restarting.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/webpages/mini_css_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src/webpages/home.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/examples/GarageDoorOpener/GarageDoor-Opener.h"
)

target_include_directories(pac-coogleiot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CoogleIOT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-coogleiot INTERFACE
    arduino-compat
)
