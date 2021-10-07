add_library(pac-ad_sensors INTERFACE)

target_sources(pac-ad_sensors INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/AverageSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/DigitalSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/ConstrainSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/SmoothSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/MapSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/AnalogSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/AnalogSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/DigitalSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/ConstrainSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/AverageSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/SmoothSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src/MapSensor.h"
)

target_include_directories(pac-ad_sensors INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD_Sensors/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ad_sensors INTERFACE
    arduino-compat
)
