add_library(pac-adafruit-pcf8591 INTERFACE)

target_sources(pac-adafruit-pcf8591 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PCF8591/Adafruit_PCF8591.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PCF8591/Adafruit_PCF8591.h"
)

target_include_directories(pac-adafruit-pcf8591 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PCF8591"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-pcf8591 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
