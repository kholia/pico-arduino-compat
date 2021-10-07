add_library(pac-grove-i2c-motor-driver-v1.3 INTERFACE)

target_sources(pac-grove-i2c-motor-driver-v1.3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Motor_Driver_v1_3/Grove_I2C_Motor_Driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Motor_Driver_v1_3/Grove_I2C_Motor_Driver.h"
)

target_include_directories(pac-grove-i2c-motor-driver-v1.3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Motor_Driver_v1_3"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-i2c-motor-driver-v1.3 INTERFACE
    arduino-compat
)
