add_library(i2csoilmoisturesensor INTERFACE)

target_sources(i2csoilmoisturesensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2CSoilMoistureSensor/I2CSoilMoistureSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2CSoilMoistureSensor/I2CSoilMoistureSensor.h"
)

target_include_directories(i2csoilmoisturesensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2CSoilMoistureSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2csoilmoisturesensor INTERFACE
    arduino-compat
)
