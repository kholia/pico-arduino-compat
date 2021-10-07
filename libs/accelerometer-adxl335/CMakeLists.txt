add_library(pac-accelerometer-adxl335 INTERFACE)

target_sources(pac-accelerometer-adxl335 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_ADXL335/ADXL335.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_ADXL335/ADXL335.h"
)

target_include_directories(pac-accelerometer-adxl335 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_ADXL335"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-accelerometer-adxl335 INTERFACE
    arduino-compat
)
