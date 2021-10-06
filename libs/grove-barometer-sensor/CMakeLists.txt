add_library(grove-barometer-sensor INTERFACE)

target_sources(grove-barometer-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_Sensor/BMP085.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_Sensor/BMP085.h"
)

target_include_directories(grove-barometer-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-barometer-sensor INTERFACE
    arduino-compat
)
