add_library(grove-6axis-accelerometer-and-compass-v2 INTERFACE)

target_sources(grove-6axis-accelerometer-and-compass-v2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_6Axis_Accelerometer_And_Compass_v2/LSM303D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_6Axis_Accelerometer_And_Compass_v2/LSM303D.h"
)

target_include_directories(grove-6axis-accelerometer-and-compass-v2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_6Axis_Accelerometer_And_Compass_v2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-6axis-accelerometer-and-compass-v2 INTERFACE
    arduino-compat
)
