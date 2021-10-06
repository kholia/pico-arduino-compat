add_library(sparkfun-lsm6ds3-breakout INTERFACE)

target_sources(sparkfun-lsm6ds3-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM6DS3_Arduino_Library/src/SparkFunLSM6DS3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM6DS3_Arduino_Library/src/SparkFunLSM6DS3.h"
)

target_include_directories(sparkfun-lsm6ds3-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM6DS3_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-lsm6ds3-breakout INTERFACE
    arduino-compat
)
