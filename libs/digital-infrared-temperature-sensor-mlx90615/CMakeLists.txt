add_library(digital-infrared-temperature-sensor-mlx90615 INTERFACE)

target_sources(digital-infrared-temperature-sensor-mlx90615 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Digital_Infrared_Temperature_Sensor_MLX90615/I2cMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Digital_Infrared_Temperature_Sensor_MLX90615/I2cMaster.h"
  "${CMAKE_CURRENT_LIST_DIR}/Digital_Infrared_Temperature_Sensor_MLX90615/MLX90615.h"
  "${CMAKE_CURRENT_LIST_DIR}/Digital_Infrared_Temperature_Sensor_MLX90615/TwiMap.h"
)

target_include_directories(digital-infrared-temperature-sensor-mlx90615 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Digital_Infrared_Temperature_Sensor_MLX90615"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(digital-infrared-temperature-sensor-mlx90615 INTERFACE
    arduino-compat
)
