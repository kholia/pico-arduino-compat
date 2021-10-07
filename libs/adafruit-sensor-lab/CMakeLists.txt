add_library(pac-adafruit-sensor-lab INTERFACE)

target_sources(pac-adafruit-sensor-lab INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SensorLab/Adafruit_SensorLab.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SensorLab/Adafruit_SensorLab.h"
)

target_include_directories(pac-adafruit-sensor-lab INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SensorLab"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-sensor-lab INTERFACE
    arduino-compat
)
