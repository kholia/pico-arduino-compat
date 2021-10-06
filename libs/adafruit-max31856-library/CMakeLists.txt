add_library(adafruit-max31856-library INTERFACE)

target_sources(adafruit-max31856-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MAX31856/Adafruit_MAX31856.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MAX31856/Adafruit_MAX31856.h"
)

target_include_directories(adafruit-max31856-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MAX31856"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-max31856-library INTERFACE
    arduino-compat
    adafruit-busio
)
