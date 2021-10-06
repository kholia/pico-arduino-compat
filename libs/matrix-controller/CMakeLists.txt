add_library(matrix-controller INTERFACE)

target_sources(matrix-controller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixController/src/MatrixController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixController/src/MatrixController.h"
)

target_include_directories(matrix-controller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixController/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(matrix-controller INTERFACE
    arduino-compat
)
