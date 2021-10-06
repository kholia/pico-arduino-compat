add_library(mpu6050_tockn INTERFACE)

target_sources(mpu6050_tockn INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MPU6050_tockn/src/MPU6050_tockn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MPU6050_tockn/src/MPU6050_tockn.h"
)

target_include_directories(mpu6050_tockn INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MPU6050_tockn/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mpu6050_tockn INTERFACE
    arduino-compat
)
