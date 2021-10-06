add_library(arduino_sensorkit INTERFACE)

target_sources(arduino_sensorkit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SensorKit/src/Arduino_SensorKit_LIS3DHTR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SensorKit/src/Arduino_SensorKit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SensorKit/src/Arduino_SensorKit_BMP280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SensorKit/src/Arduino_SensorKit_BMP280.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SensorKit/src/Arduino_SensorKit.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SensorKit/src/Arduino_SensorKit_LIS3DHTR.h"
)

target_include_directories(arduino_sensorkit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_SensorKit/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_sensorkit INTERFACE
    arduino-compat
)
