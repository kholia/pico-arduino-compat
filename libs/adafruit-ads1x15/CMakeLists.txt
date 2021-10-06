add_library(adafruit-ads1x15 INTERFACE)

target_sources(adafruit-ads1x15 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADS1X15/Adafruit_ADS1X15.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADS1X15/Adafruit_ADS1X15.h"
)

target_include_directories(adafruit-ads1x15 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADS1X15"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-ads1x15 INTERFACE
    arduino-compat
    adafruit-busio
)
