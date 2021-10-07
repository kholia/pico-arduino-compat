add_library(pac-matrix-controller INTERFACE)

target_sources(pac-matrix-controller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixController/src/MatrixController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixController/src/MatrixController.h"
)

target_include_directories(pac-matrix-controller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixController/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-matrix-controller INTERFACE
    arduino-compat
)
