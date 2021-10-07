add_library(pac-vcnl3040-proximity-sensor-library INTERFACE)

target_sources(pac-vcnl3040-proximity-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VCNL3040_Proximity_Sensor_Library/src/VCNL3040.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VCNL3040_Proximity_Sensor_Library/src/VCNL3040.h"
)

target_include_directories(pac-vcnl3040-proximity-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VCNL3040_Proximity_Sensor_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vcnl3040-proximity-sensor-library INTERFACE
    arduino-compat
)
