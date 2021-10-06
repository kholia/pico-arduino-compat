add_library(adafruit-lsm303dlh-mag INTERFACE)

target_sources(adafruit-lsm303dlh-mag INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303DLH_Mag/Adafruit_LSM303DLH_Mag.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303DLH_Mag/Adafruit_LSM303DLH_Mag.h"
)

target_include_directories(adafruit-lsm303dlh-mag INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303DLH_Mag"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-lsm303dlh-mag INTERFACE
    arduino-compat
    adafruit-busio
)
