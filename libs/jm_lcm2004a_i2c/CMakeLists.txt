add_library(pac-jm_lcm2004a_i2c INTERFACE)

target_sources(pac-jm_lcm2004a_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jm_LCM2004A_I2C/src/jm_LCM2004A_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_LCM2004A_I2C/src/jm_LCM2004A_I2C.h"
)

target_include_directories(pac-jm_lcm2004a_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jm_LCM2004A_I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jm_lcm2004a_i2c INTERFACE
    arduino-compat
)
