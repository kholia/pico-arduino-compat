add_library(pac-matrix-servo-extension INTERFACE)

target_sources(pac-matrix-servo-extension INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixServoExtension/src/MatrixServoExtension.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixServoExtension/src/MatrixServoExtension.h"
)

target_include_directories(pac-matrix-servo-extension INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixServoExtension/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-matrix-servo-extension INTERFACE
    arduino-compat
)
