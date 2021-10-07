add_library(pac-bluedot-bme280-library INTERFACE)

target_sources(pac-bluedot-bme280-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BME280/BlueDot_BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BME280/BlueDot_BME280.h"
)

target_include_directories(pac-bluedot-bme280-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BME280"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bluedot-bme280-library INTERFACE
    arduino-compat
)
