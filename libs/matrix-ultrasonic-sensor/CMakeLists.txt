add_library(matrix-ultrasonic-sensor INTERFACE)

target_sources(matrix-ultrasonic-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixUltrasonicSensor/src/MatrixUltrasonicSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixUltrasonicSensor/src/MatrixUltrasonicSensor.h"
)

target_include_directories(matrix-ultrasonic-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixUltrasonicSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(matrix-ultrasonic-sensor INTERFACE
    arduino-compat
)
