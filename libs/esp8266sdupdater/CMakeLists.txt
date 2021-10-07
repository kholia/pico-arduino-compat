add_library(pac-esp8266sdupdater INTERFACE)

target_sources(pac-esp8266sdupdater INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266SDUpdater/src/ESP8266SDUpdater.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266SDUpdater/src/ESP8266SDUpdater.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266SDUpdater/examples/OLEDiFOO/xpad8buttons.h"
)

target_include_directories(pac-esp8266sdupdater INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266SDUpdater/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-esp8266sdupdater INTERFACE
    arduino-compat
    pac-sd
)
