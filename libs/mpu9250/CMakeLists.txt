add_library(mpu9250 INTERFACE)

target_sources(mpu9250 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MPU9250/MPU9250.h"
  "${CMAKE_CURRENT_LIST_DIR}/MPU9250/MPU9250/QuaternionFilter.h"
  "${CMAKE_CURRENT_LIST_DIR}/MPU9250/MPU9250/MPU9250RegisterMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/MPU9250/examples/calibration_eeprom/eeprom_utils.h"
)

target_include_directories(mpu9250 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MPU9250"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mpu9250 INTERFACE
    arduino-compat
)
