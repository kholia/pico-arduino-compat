add_library(stm32duino-lsm6dsr INTERFACE)

target_sources(stm32duino-lsm6dsr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSR/src/LSM6DSRSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSR/src/lsm6dsr_reg.c"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSR/src/lsm6dsr_reg.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSM6DSR/src/LSM6DSRSensor.h"
)

target_include_directories(stm32duino-lsm6dsr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LSM6DSR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-lsm6dsr INTERFACE
    arduino-compat
)
