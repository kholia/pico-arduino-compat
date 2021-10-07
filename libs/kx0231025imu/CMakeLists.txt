add_library(pac-kx0231025imu INTERFACE)

target_sources(pac-kx0231025imu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KX023-1025-IMU/src/KX0231025IMU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KX023-1025-IMU/src/KX0231025IMU.h"
)

target_include_directories(pac-kx0231025imu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KX023-1025-IMU/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kx0231025imu INTERFACE
    arduino-compat
)
