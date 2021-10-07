add_library(pac-matrix-motion-sensor INTERFACE)

target_sources(pac-matrix-motion-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMotionSensor/src/MatrixMotionSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMotionSensor/src/MatrixMotionSensor.h"
)

target_include_directories(pac-matrix-motion-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixMotionSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-matrix-motion-sensor INTERFACE
    arduino-compat
)
