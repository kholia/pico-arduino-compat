add_library(adafruit-lsm303-accel INTERFACE)

target_sources(adafruit-lsm303-accel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303_Accel/Adafruit_LSM303_Accel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303_Accel/Adafruit_LSM303_Accel.h"
)

target_include_directories(adafruit-lsm303-accel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303_Accel"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-lsm303-accel INTERFACE
    arduino-compat
    adafruit-busio
)
