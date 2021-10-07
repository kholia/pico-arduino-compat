add_library(pac-accelerometer_h3lis331dl INTERFACE)

target_sources(pac-accelerometer_h3lis331dl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_H3LIS331DL/H3LIS331DL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_H3LIS331DL/H3LIS331DL.h"
)

target_include_directories(pac-accelerometer_h3lis331dl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_H3LIS331DL"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-accelerometer_h3lis331dl INTERFACE
    arduino-compat
)
