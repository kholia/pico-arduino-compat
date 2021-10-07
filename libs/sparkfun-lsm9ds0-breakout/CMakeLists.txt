add_library(pac-sparkfun-lsm9ds0-breakout INTERFACE)

target_sources(pac-sparkfun-lsm9ds0-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS0_Arduino_Library/src/SFE_LSM9DS0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS0_Arduino_Library/src/SFE_LSM9DS0.h"
)

target_include_directories(pac-sparkfun-lsm9ds0-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS0_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-lsm9ds0-breakout INTERFACE
    arduino-compat
)
