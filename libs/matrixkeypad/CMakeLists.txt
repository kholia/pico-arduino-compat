add_library(matrixkeypad INTERFACE)

target_sources(matrixkeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixKeypad/src/MatrixKeypad.c"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixKeypad/src/MatrixKeypad.h"
)

target_include_directories(matrixkeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixKeypad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(matrixkeypad INTERFACE
    arduino-compat
)
