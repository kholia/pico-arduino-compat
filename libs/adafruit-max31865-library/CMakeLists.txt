add_library(pac-adafruit-max31865-library INTERFACE)

target_sources(pac-adafruit-max31865-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MAX31865/Adafruit_MAX31865.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MAX31865/Adafruit_MAX31865.h"
)

target_include_directories(pac-adafruit-max31865-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MAX31865"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-max31865-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
