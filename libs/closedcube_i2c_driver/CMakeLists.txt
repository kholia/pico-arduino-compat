add_library(closedcube_i2c_driver INTERFACE)

target_sources(closedcube_i2c_driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_I2C_Arduino/src/ClosedCube_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_I2C_Arduino/src/ClosedCube_I2C.h"
)

target_include_directories(closedcube_i2c_driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_I2C_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(closedcube_i2c_driver INTERFACE
    arduino-compat
)
