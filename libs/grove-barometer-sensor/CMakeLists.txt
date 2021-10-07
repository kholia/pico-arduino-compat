add_library(pac-grove-barometer-sensor INTERFACE)

target_sources(pac-grove-barometer-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_Sensor/BMP085.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_Sensor/BMP085.h"
)

target_include_directories(pac-grove-barometer-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-barometer-sensor INTERFACE
    arduino-compat
)
