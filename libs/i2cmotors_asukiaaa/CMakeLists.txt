add_library(pac-i2cmotors_asukiaaa INTERFACE)

target_sources(pac-i2cmotors_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2cMotors_asukiaaa/src/I2cMotors_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2cMotors_asukiaaa/src/I2cMotors_asukiaaa.h"
)

target_include_directories(pac-i2cmotors_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2cMotors_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2cmotors_asukiaaa INTERFACE
    arduino-compat
)
