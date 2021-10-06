add_library(ssvxymatrixtext INTERFACE)

target_sources(ssvxymatrixtext INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVXYMatrixText/SSVXYMatrixText.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SSVXYMatrixText/fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSVXYMatrixText/SSVXYMatrixText.h"
)

target_include_directories(ssvxymatrixtext INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVXYMatrixText"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ssvxymatrixtext INTERFACE
    arduino-compat
)
