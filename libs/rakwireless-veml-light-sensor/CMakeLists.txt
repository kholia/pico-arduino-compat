add_library(pac-rakwireless-veml-light-sensor INTERFACE)

target_sources(pac-rakwireless-veml-light-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RAK12010-VEML7700-Library/src/Light_VEML7700.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RAK12010-VEML7700-Library/src/Light_VEML7700.h"
)

target_include_directories(pac-rakwireless-veml-light-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RAK12010-VEML7700-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-rakwireless-veml-light-sensor INTERFACE
    arduino-compat
    pac-adafruit-busio
)
