add_library(pac-gravity-soil-moisture-sensor INTERFACE)

target_sources(pac-gravity-soil-moisture-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-gravity-soil-moisture-sensor/src/gravity_soil_moisture_sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-gravity-soil-moisture-sensor/src/gravity_soil_moisture_sensor.h"
)

target_include_directories(pac-gravity-soil-moisture-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-gravity-soil-moisture-sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gravity-soil-moisture-sensor INTERFACE
    arduino-compat
)
