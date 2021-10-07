add_library(pac-adafruit-lis2mdl INTERFACE)

target_sources(pac-adafruit-lis2mdl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS2MDL/Adafruit_LIS2MDL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS2MDL/Adafruit_LIS2MDL.h"
)

target_include_directories(pac-adafruit-lis2mdl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS2MDL"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-lis2mdl INTERFACE
    arduino-compat
    pac-adafruit-busio
)
