add_library(esp8266sdupdater INTERFACE)

target_sources(esp8266sdupdater INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266SDUpdater/src/ESP8266SDUpdater.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266SDUpdater/src/ESP8266SDUpdater.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266SDUpdater/examples/OLEDiFOO/xpad8buttons.h"
)

target_include_directories(esp8266sdupdater INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266SDUpdater/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(esp8266sdupdater INTERFACE
    arduino-compat
    official-sd
)
