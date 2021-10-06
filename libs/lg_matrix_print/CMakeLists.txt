add_library(lg_matrix_print INTERFACE)

target_sources(lg_matrix_print INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LG_Matrix_Print/src/LG_Matrix_Print.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LG_Matrix_Print/src/LG_Matrix_Print.h"
)

target_include_directories(lg_matrix_print INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LG_Matrix_Print/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lg_matrix_print INTERFACE
    arduino-compat
)
