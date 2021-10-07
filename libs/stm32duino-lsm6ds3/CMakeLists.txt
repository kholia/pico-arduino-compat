add_library(pac-stm32duino-lsm6ds3 INTERFACE)

target_sources(pac-stm32duino-lsm6ds3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DS3/src/LSM6DS3Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DS3/src/LSM6DS3_ACC_GYRO_Driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DS3/src/LSM6DS3Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DS3/src/LSM6DS3_ACC_GYRO_Driver.h"
)

target_include_directories(pac-stm32duino-lsm6ds3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LSM6DS3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-lsm6ds3 INTERFACE
    arduino-compat
)
