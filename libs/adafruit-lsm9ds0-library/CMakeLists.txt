add_library(pac-adafruit-lsm9ds0-library INTERFACE)

target_sources(pac-adafruit-lsm9ds0-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM9DS0_Library/Adafruit_LSM9DS0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM9DS0_Library/Adafruit_LSM9DS0.h"
)

target_include_directories(pac-adafruit-lsm9ds0-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LSM9DS0_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-lsm9ds0-library INTERFACE
    arduino-compat
)
