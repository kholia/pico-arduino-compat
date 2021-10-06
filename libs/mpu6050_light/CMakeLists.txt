add_library(mpu6050_light INTERFACE)

target_sources(mpu6050_light INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MPU6050_light/src/MPU6050_light.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MPU6050_light/src/MPU6050_light.h"
)

target_include_directories(mpu6050_light INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MPU6050_light/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mpu6050_light INTERFACE
    arduino-compat
)
