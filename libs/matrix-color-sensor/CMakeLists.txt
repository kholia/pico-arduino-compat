add_library(matrix-color-sensor INTERFACE)

target_sources(matrix-color-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixColorSensor/src/MatrixColorSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixColorSensor/src/MatrixColorSensor.h"
)

target_include_directories(matrix-color-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixColorSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(matrix-color-sensor INTERFACE
    arduino-compat
)
