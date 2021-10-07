add_library(pac-grove-6axis_digital_accelerometer_gyroscope4_adis16470 INTERFACE)

target_sources(pac-grove-6axis_digital_accelerometer_gyroscope4_adis16470 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_ADIS16470/Seeed_ADIS16470.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_ADIS16470/Seeed_ADIS16470.h"
)

target_include_directories(pac-grove-6axis_digital_accelerometer_gyroscope4_adis16470 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_ADIS16470"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-6axis_digital_accelerometer_gyroscope4_adis16470 INTERFACE
    arduino-compat
)
