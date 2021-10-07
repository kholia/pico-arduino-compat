add_library(pac-stm32duino-lsm6ds0 INTERFACE)

target_sources(pac-stm32duino-lsm6ds0 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DS0/src/LSM6DS0Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DS0/src/LSM6DS0_ACC_GYRO_Driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DS0/src/LSM6DS0_ACC_GYRO_Driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DS0/src/LSM6DS0Sensor.h"
)

target_include_directories(pac-stm32duino-lsm6ds0 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LSM6DS0/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-lsm6ds0 INTERFACE
    arduino-compat
)
