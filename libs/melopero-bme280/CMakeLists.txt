add_library(melopero-bme280 INTERFACE)

target_sources(melopero-bme280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_BME280_Arduino_Library/src/Melopero_BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_BME280_Arduino_Library/src/api/bme280.c"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_BME280_Arduino_Library/src/Melopero_BME280.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_BME280_Arduino_Library/src/api/bme280.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_BME280_Arduino_Library/src/api/bme280_defs.h"
)

target_include_directories(melopero-bme280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Melopero_BME280_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(melopero-bme280 INTERFACE
    arduino-compat
)
