add_library(pac-bme280_zanshin INTERFACE)

target_sources(pac-bme280_zanshin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BME280/src/BME280.h"
)

target_include_directories(pac-bme280_zanshin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BME280/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bme280_zanshin INTERFACE
    arduino-compat
)
