add_library(pac-basicmpu6050 INTERFACE)

target_sources(pac-basicmpu6050 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/basicMPU6050/src/basicMPU6050.h"
)

target_include_directories(pac-basicmpu6050 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/basicMPU6050/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-basicmpu6050 INTERFACE
    arduino-compat
)
