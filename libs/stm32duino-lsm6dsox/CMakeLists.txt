add_library(pac-stm32duino-lsm6dsox INTERFACE)

target_sources(pac-stm32duino-lsm6dsox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSOX/src/LSM6DSOXSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSOX/src/lsm6dsox_reg.c"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSOX/src/LSM6DSOXSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSOX/src/lsm6dsox_reg.h"
)

target_include_directories(pac-stm32duino-lsm6dsox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LSM6DSOX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-lsm6dsox INTERFACE
    arduino-compat
)
