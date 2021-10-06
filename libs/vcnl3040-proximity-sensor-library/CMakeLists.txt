add_library(vcnl3040-proximity-sensor-library INTERFACE)

target_sources(vcnl3040-proximity-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VCNL3040_Proximity_Sensor_Library/src/VCNL3040.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VCNL3040_Proximity_Sensor_Library/src/VCNL3040.h"
)

target_include_directories(vcnl3040-proximity-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VCNL3040_Proximity_Sensor_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vcnl3040-proximity-sensor-library INTERFACE
    arduino-compat
)
