add_library(digitalpressuresensor INTERFACE)

target_sources(digitalpressuresensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src/Dps310.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src/Dps422.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src/DpsClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src/Dps422.h"
  "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src/DpsClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src/Dps310.h"
  "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src/util/dps310_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src/util/dps_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src/util/dps422_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src/util/DpsRegister.h"
)

target_include_directories(digitalpressuresensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DPS310-Pressure-Sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(digitalpressuresensor INTERFACE
    arduino-compat
)
