add_library(pac-flinduino_sensorkit INTERFACE)

target_sources(pac-flinduino_sensorkit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit_LIS3DHTR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit_BMP280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit_LIS3DHTR.h"
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit.h"
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit_BMP280.h"
)

target_include_directories(pac-flinduino_sensorkit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flinduino_sensorkit INTERFACE
    arduino-compat
)
