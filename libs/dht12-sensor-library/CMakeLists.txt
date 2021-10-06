add_library(dht12-sensor-library INTERFACE)

target_sources(dht12-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHT12_sensor_library/DHT12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHT12_sensor_library/DHT12.h"
)

target_include_directories(dht12-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHT12_sensor_library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dht12-sensor-library INTERFACE
    arduino-compat
)
