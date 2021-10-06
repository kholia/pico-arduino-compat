add_library(bluedot-bme280-tsl2591 INTERFACE)

target_sources(bluedot-bme280-tsl2591 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BME280_TSL2591/BlueDot_BME280_TSL2591.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BME280_TSL2591/BlueDot_BME280_TSL2591.h"
)

target_include_directories(bluedot-bme280-tsl2591 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BME280_TSL2591"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bluedot-bme280-tsl2591 INTERFACE
    arduino-compat
)
