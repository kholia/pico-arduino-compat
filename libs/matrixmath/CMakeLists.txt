add_library(matrixmath INTERFACE)

target_sources(matrixmath INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMath/MatrixMath.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMath/MatrixMath.h"
)

target_include_directories(matrixmath INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixMath"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(matrixmath INTERFACE
    arduino-compat
)
