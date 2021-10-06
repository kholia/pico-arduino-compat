add_library(accelerometer_mma7660 INTERFACE)

target_sources(accelerometer_mma7660 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_MMA7660/MMA7660.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_MMA7660/MMA7660.h"
)

target_include_directories(accelerometer_mma7660 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_MMA7660"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(accelerometer_mma7660 INTERFACE
    arduino-compat
)
