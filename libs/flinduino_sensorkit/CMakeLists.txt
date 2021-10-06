add_library(flinduino_sensorkit INTERFACE)

target_sources(flinduino_sensorkit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit_LIS3DHTR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit_BMP280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit_LIS3DHTR.h"
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit.h"
  "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src/Flinduino_SensorKit_BMP280.h"
)

target_include_directories(flinduino_sensorkit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Flinduino_SensorKit/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(flinduino_sensorkit INTERFACE
    arduino-compat
)
