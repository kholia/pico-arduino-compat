add_library(pac-matrix-ultrasonic-sensor INTERFACE)

target_sources(pac-matrix-ultrasonic-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixUltrasonicSensor/src/MatrixUltrasonicSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixUltrasonicSensor/src/MatrixUltrasonicSensor.h"
)

target_include_directories(pac-matrix-ultrasonic-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixUltrasonicSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-matrix-ultrasonic-sensor INTERFACE
    arduino-compat
)
