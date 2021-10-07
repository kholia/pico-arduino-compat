add_library(pac-sparkfun-lis2dh12-arduino-library INTERFACE)

target_sources(pac-sparkfun-lis2dh12-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIS2DH12_Arduino_Library/src/SparkFun_LIS2DH12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIS2DH12_Arduino_Library/src/lis2dh12_reg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIS2DH12_Arduino_Library/src/SparkFun_LIS2DH12.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIS2DH12_Arduino_Library/src/lis2dh12_reg.h"
)

target_include_directories(pac-sparkfun-lis2dh12-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIS2DH12_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-lis2dh12-arduino-library INTERFACE
    arduino-compat
)
