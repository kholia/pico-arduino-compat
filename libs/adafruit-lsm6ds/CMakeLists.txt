add_library(pac-adafruit-lsm6ds INTERFACE)

target_sources(pac-adafruit-lsm6ds INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DSOX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DS33.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DSO32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DSL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_ISM330DHCX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DS3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DS3.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DSL.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DSOX.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DSO32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_LSM6DS33.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS/Adafruit_ISM330DHCX.h"
)

target_include_directories(pac-adafruit-lsm6ds INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM6DS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-lsm6ds INTERFACE
    arduino-compat
    pac-adafruit-busio
)
