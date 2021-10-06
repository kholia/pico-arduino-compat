add_library(grove-temperature-and-humidity-sensor INTERFACE)

target_sources(grove-temperature-and-humidity-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Temperature_And_Humidity_Sensor/DHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Temperature_And_Humidity_Sensor/DHT.h"
)

target_include_directories(grove-temperature-and-humidity-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Temperature_And_Humidity_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-temperature-and-humidity-sensor INTERFACE
    arduino-compat
)
