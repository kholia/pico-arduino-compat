add_library(pac-matrix-motor-extension INTERFACE)

target_sources(pac-matrix-motor-extension INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMotorExtension/src/MatrixMotorExtension.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMotorExtension/src/MatrixMotorExtension.h"
)

target_include_directories(pac-matrix-motor-extension INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixMotorExtension/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-matrix-motor-extension INTERFACE
    arduino-compat
)
