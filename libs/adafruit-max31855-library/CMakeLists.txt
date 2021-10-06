add_library(adafruit-max31855-library INTERFACE)

target_sources(adafruit-max31855-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MAX31855-library/Adafruit_MAX31855.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MAX31855-library/Adafruit_MAX31855.h"
)

target_include_directories(adafruit-max31855-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MAX31855-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-max31855-library INTERFACE
    arduino-compat
    adafruit-busio
)
