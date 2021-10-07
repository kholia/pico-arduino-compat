add_library(pac-sensor INTERFACE)

target_sources(pac-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sensor/src/Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sensor/src/Sensor.h"
)

target_include_directories(pac-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sensor INTERFACE
    arduino-compat
)
