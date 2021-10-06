add_library(forced-bme280 INTERFACE)

target_sources(forced-bme280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Forced-BME280/src/forcedClimate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Forced-BME280/src/forcedClimate.h"
)

target_include_directories(forced-bme280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Forced-BME280/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(forced-bme280 INTERFACE
    arduino-compat
)
