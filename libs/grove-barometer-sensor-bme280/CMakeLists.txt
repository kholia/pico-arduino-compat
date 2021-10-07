add_library(pac-grove-barometer-sensor-bme280 INTERFACE)

target_sources(pac-grove-barometer-sensor-bme280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_BME280/Seeed_BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_BME280/Seeed_BME280.h"
)

target_include_directories(pac-grove-barometer-sensor-bme280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_BME280"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-barometer-sensor-bme280 INTERFACE
    arduino-compat
)
