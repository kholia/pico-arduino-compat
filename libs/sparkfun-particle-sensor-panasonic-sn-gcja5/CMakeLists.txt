add_library(pac-sparkfun-particle-sensor-panasonic-sn-gcja5 INTERFACE)

target_sources(pac-sparkfun-particle-sensor-panasonic-sn-gcja5 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Particle_Sensor_SN-GCJA5_Arduino_Library/src/SparkFun_Particle_Sensor_SN-GCJA5_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Particle_Sensor_SN-GCJA5_Arduino_Library/src/SparkFun_Particle_Sensor_SN-GCJA5_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-particle-sensor-panasonic-sn-gcja5 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Particle_Sensor_SN-GCJA5_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-particle-sensor-panasonic-sn-gcja5 INTERFACE
    arduino-compat
)
