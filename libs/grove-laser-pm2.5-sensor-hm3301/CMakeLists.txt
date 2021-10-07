add_library(pac-grove-laser-pm2.5-sensor-hm3301 INTERFACE)

target_sources(pac-grove-laser-pm2.5-sensor-hm3301 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_PM2_5_sensor_HM3301/src/Seeed_HM330X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_PM2_5_sensor_HM3301/src/I2COperations.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_PM2_5_sensor_HM3301/src/I2COperations.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_PM2_5_sensor_HM3301/src/Seeed_HM330X.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_PM2_5_sensor_HM3301/src/HM330XErrorCode.h"
)

target_include_directories(pac-grove-laser-pm2.5-sensor-hm3301 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_PM2_5_sensor_HM3301/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-laser-pm2.5-sensor-hm3301 INTERFACE
    arduino-compat
)
