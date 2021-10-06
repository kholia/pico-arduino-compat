add_library(longfi INTERFACE)

target_sources(longfi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/longfi-arduino/Adafruit-Feather-M0-RFM95/longfi-us915/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/longfi-arduino/Adafruit-Feather-M0-RFM95/longfi-us915-cayenne-dht22/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/longfi-arduino/Sparkfun-Pro-RF/longfi-us915/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/longfi-arduino/TTGO-TBeam-Tracker/main/fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/longfi-arduino/TTGO-TBeam-Tracker/main/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/longfi-arduino/TTGO-TBeam-Tracker/main/credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/longfi-arduino/TTGO-TBeam-Tracker/main/configuration.h"
)

target_include_directories(longfi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/longfi-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(longfi INTERFACE
    arduino-compat
)
