add_library(i2c-helper INTERFACE)

target_sources(i2c-helper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2CHelper/src/I2CHelper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2CHelper/examples/MyI2CDevice/MyI2CDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2CHelper/src/I2CHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/I2CHelper/examples/MyI2CDevice/MyI2CDevice.h"
)

target_include_directories(i2c-helper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2CHelper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2c-helper INTERFACE
    arduino-compat
)
