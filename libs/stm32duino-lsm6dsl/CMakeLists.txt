add_library(pac-stm32duino-lsm6dsl INTERFACE)

target_sources(pac-stm32duino-lsm6dsl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSL/src/LSM6DSLSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSL/src/LSM6DSL_ACC_GYRO_Driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSL/src/LSM6DSL_ACC_GYRO_Driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSL/src/LSM6DSLSensor.h"
)

target_include_directories(pac-stm32duino-lsm6dsl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LSM6DSL/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-lsm6dsl INTERFACE
    arduino-compat
)
