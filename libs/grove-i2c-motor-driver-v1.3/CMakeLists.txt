add_library(grove-i2c-motor-driver-v1.3 INTERFACE)

target_sources(grove-i2c-motor-driver-v1.3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Motor_Driver_v1_3/Grove_I2C_Motor_Driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Motor_Driver_v1_3/Grove_I2C_Motor_Driver.h"
)

target_include_directories(grove-i2c-motor-driver-v1.3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Motor_Driver_v1_3"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-i2c-motor-driver-v1.3 INTERFACE
    arduino-compat
)
