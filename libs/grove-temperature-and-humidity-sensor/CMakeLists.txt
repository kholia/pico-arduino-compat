add_library(pac-grove-temperature-and-humidity-sensor INTERFACE)

target_sources(pac-grove-temperature-and-humidity-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Temperature_And_Humidity_Sensor/DHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Temperature_And_Humidity_Sensor/DHT.h"
)

target_include_directories(pac-grove-temperature-and-humidity-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Temperature_And_Humidity_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-temperature-and-humidity-sensor INTERFACE
    arduino-compat
)
