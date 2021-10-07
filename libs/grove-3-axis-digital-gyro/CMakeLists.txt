add_library(pac-grove-3-axis-digital-gyro INTERFACE)

target_sources(pac-grove-3-axis-digital-gyro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_3_Axis_Digital_Gyro/ITG3200.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_3_Axis_Digital_Gyro/ITG3200.h"
)

target_include_directories(pac-grove-3-axis-digital-gyro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_3_Axis_Digital_Gyro"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-3-axis-digital-gyro INTERFACE
    arduino-compat
)
