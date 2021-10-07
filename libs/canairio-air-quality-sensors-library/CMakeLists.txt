add_library(pac-canairio-air-quality-sensors-library INTERFACE)

target_sources(pac-canairio-air-quality-sensors-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/canairio_sensorlib/src/Sensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/canairio_sensorlib/examples/platformio/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/canairio_sensorlib/examples/sps30i2c/sps30i2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/canairio_sensorlib/src/Sensors.hpp"
)

target_include_directories(pac-canairio-air-quality-sensors-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/canairio_sensorlib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-canairio-air-quality-sensors-library INTERFACE
    arduino-compat
)
