add_library(pac-bolder-flight-systems-bme280 INTERFACE)

target_sources(pac-bolder-flight-systems-bme280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BME280/include/bme280/bme280.h"
)

target_include_directories(pac-bolder-flight-systems-bme280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BME280/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bolder-flight-systems-bme280 INTERFACE
    arduino-compat
)
