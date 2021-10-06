add_library(adafruit-lsm9ds1-library INTERFACE)

target_sources(adafruit-lsm9ds1-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM9DS1/Adafruit_LSM9DS1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM9DS1/Adafruit_LSM9DS1.h"
)

target_include_directories(adafruit-lsm9ds1-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM9DS1"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-lsm9ds1-library INTERFACE
    arduino-compat
    adafruit-busio
)
