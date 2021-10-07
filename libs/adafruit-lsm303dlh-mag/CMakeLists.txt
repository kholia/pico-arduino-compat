add_library(pac-adafruit-lsm303dlh-mag INTERFACE)

target_sources(pac-adafruit-lsm303dlh-mag INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303DLH_Mag/Adafruit_LSM303DLH_Mag.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303DLH_Mag/Adafruit_LSM303DLH_Mag.h"
)

target_include_directories(pac-adafruit-lsm303dlh-mag INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303DLH_Mag"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-lsm303dlh-mag INTERFACE
    arduino-compat
    pac-adafruit-busio
)
