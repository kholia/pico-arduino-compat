add_library(pac-dht12-sensor-library INTERFACE)

target_sources(pac-dht12-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHT12_sensor_library/DHT12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT12_sensor_library/DHT12.h"
)

target_include_directories(pac-dht12-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHT12_sensor_library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dht12-sensor-library INTERFACE
    arduino-compat
)
