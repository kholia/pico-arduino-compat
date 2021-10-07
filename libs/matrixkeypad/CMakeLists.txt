add_library(pac-matrixkeypad INTERFACE)

target_sources(pac-matrixkeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixKeypad/src/MatrixKeypad.c"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixKeypad/src/MatrixKeypad.h"
)

target_include_directories(pac-matrixkeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixKeypad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-matrixkeypad INTERFACE
    arduino-compat
)
