add_library(pac-adafruit-ads1x15 INTERFACE)

target_sources(pac-adafruit-ads1x15 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADS1X15/Adafruit_ADS1X15.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADS1X15/Adafruit_ADS1X15.h"
)

target_include_directories(pac-adafruit-ads1x15 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADS1X15"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-ads1x15 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
