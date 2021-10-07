add_library(pac-closedcube-bme680 INTERFACE)

target_sources(pac-closedcube-bme680 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_BME680_Arduino/src/ClosedCube_BME680.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_BME680_Arduino/src/ClosedCube_BME680.h"
)

target_include_directories(pac-closedcube-bme680 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_BME680_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-bme680 INTERFACE
    arduino-compat
)
