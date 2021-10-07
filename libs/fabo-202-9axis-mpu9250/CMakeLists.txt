add_library(pac-fabo-202-9axis-mpu9250 INTERFACE)

target_sources(pac-fabo-202-9axis-mpu9250 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBo9AXIS-MPU9250-Library/src/FaBo9Axis_MPU9250.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBo9AXIS-MPU9250-Library/src/FaBo9Axis_MPU9250.h"
)

target_include_directories(pac-fabo-202-9axis-mpu9250 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBo9AXIS-MPU9250-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-202-9axis-mpu9250 INTERFACE
    arduino-compat
)
