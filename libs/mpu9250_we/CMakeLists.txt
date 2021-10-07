add_library(pac-mpu9250_we INTERFACE)

target_sources(pac-mpu9250_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MPU9250_WE/src/MPU9250_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MPU9250_WE/src/MPU9250_WE.h"
)

target_include_directories(pac-mpu9250_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MPU9250_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mpu9250_we INTERFACE
    arduino-compat
)
