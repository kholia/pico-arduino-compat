add_library(adafruit-pcf8591 INTERFACE)

target_sources(adafruit-pcf8591 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PCF8591/Adafruit_PCF8591.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PCF8591/Adafruit_PCF8591.h"
)

target_include_directories(adafruit-pcf8591 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PCF8591"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-pcf8591 INTERFACE
    arduino-compat
    adafruit-busio
)
