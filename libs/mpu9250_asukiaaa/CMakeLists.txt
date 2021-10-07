add_library(pac-mpu9250_asukiaaa INTERFACE)

target_sources(pac-mpu9250_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MPU9250_asukiaaa/src/MPU9250_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MPU9250_asukiaaa/src/MPU9250_asukiaaa.h"
)

target_include_directories(pac-mpu9250_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MPU9250_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mpu9250_asukiaaa INTERFACE
    arduino-compat
)
