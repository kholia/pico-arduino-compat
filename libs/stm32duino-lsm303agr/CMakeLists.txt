add_library(stm32duino-lsm303agr INTERFACE)

target_sources(stm32duino-lsm303agr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LSM303AGR/src/LSM303AGR_MAG_Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSM303AGR/src/LSM303AGR_ACC_Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSM303AGR/src/LSM303AGR_ACC_Driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/LSM303AGR/src/LSM303AGR_MAG_Driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/LSM303AGR/src/LSM303AGR_ACC_Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSM303AGR/src/LSM303AGR_MAG_Driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSM303AGR/src/LSM303AGR_MAG_Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSM303AGR/src/LSM303AGR_ACC_Driver.h"
)

target_include_directories(stm32duino-lsm303agr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LSM303AGR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-lsm303agr INTERFACE
    arduino-compat
)
