add_library(pac-adafruit-sensor-calibration INTERFACE)

target_sources(pac-adafruit-sensor-calibration INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor_Calibration/Adafruit_Sensor_Calibration_SDFat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor_Calibration/Adafruit_Sensor_Calibration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor_Calibration/Adafruit_Sensor_Calibration_EEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor_Calibration/Adafruit_Sensor_Calibration_SDFat.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor_Calibration/Adafruit_Sensor_Calibration_EEPROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor_Calibration/Adafruit_Sensor_Calibration.h"
)

target_include_directories(pac-adafruit-sensor-calibration INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor_Calibration"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-sensor-calibration INTERFACE
    arduino-compat
)
