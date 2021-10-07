add_library(pac-mrm-imu INTERFACE)

target_sources(pac-mrm-imu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-imu/src/mrm-imu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-imu/src/bno055.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-imu/src/bno055.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-imu/src/mrm-imu.h"
)

target_include_directories(pac-mrm-imu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-imu/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-imu INTERFACE
    arduino-compat
)
