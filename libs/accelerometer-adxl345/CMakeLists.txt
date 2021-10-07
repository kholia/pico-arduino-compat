add_library(pac-accelerometer-adxl345 INTERFACE)

target_sources(pac-accelerometer-adxl345 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_ADXL345/ADXL345.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_ADXL345/ADXL345.h"
)

target_include_directories(pac-accelerometer-adxl345 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_ADXL345"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-accelerometer-adxl345 INTERFACE
    arduino-compat
)
