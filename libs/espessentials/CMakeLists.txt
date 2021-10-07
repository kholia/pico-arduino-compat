add_library(pac-espessentials INTERFACE)

target_sources(pac-espessentials INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPEssentials/OTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPEssentials/ESPEssentials.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPEssentials/Wifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPEssentials/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPEssentials/ESPEssentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPEssentials/WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPEssentials/SerialOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPEssentials/OTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPEssentials/Wifi.h"
)

target_include_directories(pac-espessentials INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPEssentials"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espessentials INTERFACE
    arduino-compat
)
