add_library(fabo-202-9axis-mpu9250 INTERFACE)

target_sources(fabo-202-9axis-mpu9250 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBo9AXIS-MPU9250-Library/src/FaBo9Axis_MPU9250.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBo9AXIS-MPU9250-Library/src/FaBo9Axis_MPU9250.h"
)

target_include_directories(fabo-202-9axis-mpu9250 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBo9AXIS-MPU9250-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-202-9axis-mpu9250 INTERFACE
    arduino-compat
)
