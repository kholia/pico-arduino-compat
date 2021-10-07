add_library(pac-sparkfun-mma8452q-accelerometer INTERFACE)

target_sources(pac-sparkfun-mma8452q-accelerometer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MMA8452Q_Arduino_Library/src/SparkFun_MMA8452Q.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MMA8452Q_Arduino_Library/src/SparkFun_MMA8452Q.h"
)

target_include_directories(pac-sparkfun-mma8452q-accelerometer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MMA8452Q_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-mma8452q-accelerometer INTERFACE
    arduino-compat
)
