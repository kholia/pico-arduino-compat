add_library(bluedot-bme280-library INTERFACE)

target_sources(bluedot-bme280-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BME280/BlueDot_BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BME280/BlueDot_BME280.h"
)

target_include_directories(bluedot-bme280-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BME280"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bluedot-bme280-library INTERFACE
    arduino-compat
)
