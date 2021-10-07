add_library(pac-grove-air-quality-sensor INTERFACE)

target_sources(pac-grove-air-quality-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Air_quality_Sensor/Air_Quality_Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Air_quality_Sensor/Air_Quality_Sensor.h"
)

target_include_directories(pac-grove-air-quality-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Air_quality_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-air-quality-sensor INTERFACE
    arduino-compat
)
