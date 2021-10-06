add_library(step_cyc10_i2c INTERFACE)

target_sources(step_cyc10_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Step_CYC10_I2C/src/Step_CYC10_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Step_CYC10_I2C/src/Step_CYC10_I2C.h"
)

target_include_directories(step_cyc10_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Step_CYC10_I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(step_cyc10_i2c INTERFACE
    arduino-compat
)
