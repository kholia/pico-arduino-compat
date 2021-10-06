add_library(matrix-servo-extension INTERFACE)

target_sources(matrix-servo-extension INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixServoExtension/src/MatrixServoExtension.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixServoExtension/src/MatrixServoExtension.h"
)

target_include_directories(matrix-servo-extension INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixServoExtension/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(matrix-servo-extension INTERFACE
    arduino-compat
)
