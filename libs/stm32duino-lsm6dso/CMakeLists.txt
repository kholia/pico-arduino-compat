add_library(pac-stm32duino-lsm6dso INTERFACE)

target_sources(pac-stm32duino-lsm6dso INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSO/src/LSM6DSOSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSO/src/lsm6dso_reg.c"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSO/src/lsm6dso_reg.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSO/src/LSM6DSOSensor.h"
)

target_include_directories(pac-stm32duino-lsm6dso INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LSM6DSO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-lsm6dso INTERFACE
    arduino-compat
)
