add_library(adafruit-lis3mdl INTERFACE)

target_sources(adafruit-lis3mdl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS3MDL/Adafruit_LIS3MDL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS3MDL/Adafruit_LIS3MDL.h"
)

target_include_directories(adafruit-lis3mdl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS3MDL"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-lis3mdl INTERFACE
    arduino-compat
    adafruit-busio
)
