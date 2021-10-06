add_library(bme280 INTERFACE)

target_sources(bme280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280I2C_BRZO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/EnvironmentCalculations.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280SpiSw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280Spi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280.h"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280Spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/EnvironmentCalculations.h"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280SpiSw.h"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280I2C_BRZO.h"
)

target_include_directories(bme280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BME280/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bme280 INTERFACE
    arduino-compat
)
