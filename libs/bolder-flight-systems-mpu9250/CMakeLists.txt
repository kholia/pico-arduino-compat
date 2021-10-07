add_library(pac-bolder-flight-systems-mpu9250 INTERFACE)

target_sources(pac-bolder-flight-systems-mpu9250 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MPU9250/include/mpu9250/mpu9250.h"
)

target_include_directories(pac-bolder-flight-systems-mpu9250 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MPU9250/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bolder-flight-systems-mpu9250 INTERFACE
    arduino-compat
)
