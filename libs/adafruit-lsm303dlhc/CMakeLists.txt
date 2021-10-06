add_library(adafruit-lsm303dlhc INTERFACE)

target_sources(adafruit-lsm303dlhc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303DLHC/Adafruit_LSM303_U.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303DLHC/Adafruit_LSM303.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303DLHC/Adafruit_LSM303_U.h"
)

target_include_directories(adafruit-lsm303dlhc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM303DLHC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-lsm303dlhc INTERFACE
    arduino-compat
)
