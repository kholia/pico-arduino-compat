add_library(pac-grove-i2c-color-sensor INTERFACE)

target_sources(pac-grove-i2c-color-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Color_Sensor/GroveColorSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Color_Sensor/Utilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Color_Sensor/GroveColorSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Color_Sensor/Registers.h"
)

target_include_directories(pac-grove-i2c-color-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_I2C_Color_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-i2c-color-sensor INTERFACE
    arduino-compat
)
