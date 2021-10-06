add_library(sparkfun-lsm9ds0-breakout INTERFACE)

target_sources(sparkfun-lsm9ds0-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS0_Arduino_Library/src/SFE_LSM9DS0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS0_Arduino_Library/src/SFE_LSM9DS0.h"
)

target_include_directories(sparkfun-lsm9ds0-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS0_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-lsm9ds0-breakout INTERFACE
    arduino-compat
)
