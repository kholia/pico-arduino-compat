add_library(pac-matrix-color-sensor INTERFACE)

target_sources(pac-matrix-color-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixColorSensor/src/MatrixColorSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixColorSensor/src/MatrixColorSensor.h"
)

target_include_directories(pac-matrix-color-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixColorSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-matrix-color-sensor INTERFACE
    arduino-compat
)
