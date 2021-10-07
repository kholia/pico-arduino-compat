add_library(pac-sparkfun-lis3dh-arduino-library INTERFACE)

target_sources(pac-sparkfun-lis3dh-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIS3DH_Arduino_Library/src/SparkFunLIS3DH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIS3DH_Arduino_Library/src/SparkFunLIS3DH.h"
)

target_include_directories(pac-sparkfun-lis3dh-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIS3DH_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-lis3dh-arduino-library INTERFACE
    arduino-compat
)
