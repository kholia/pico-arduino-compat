add_library(keymatrix INTERFACE)

target_sources(keymatrix INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KeyMatrix/src/KeyMatrixPhone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KeyMatrix/src/KeyMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KeyMatrix/src/KeyMatrixPhone.h"
  "${CMAKE_CURRENT_LIST_DIR}/KeyMatrix/src/KeyMatrix.h"
)

target_include_directories(keymatrix INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KeyMatrix/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(keymatrix INTERFACE
    arduino-compat
)
