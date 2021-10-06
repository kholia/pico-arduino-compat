add_library(matrix-motion-sensor INTERFACE)

target_sources(matrix-motion-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMotionSensor/src/MatrixMotionSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMotionSensor/src/MatrixMotionSensor.h"
)

target_include_directories(matrix-motion-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixMotionSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(matrix-motion-sensor INTERFACE
    arduino-compat
)
