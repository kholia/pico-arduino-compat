add_library(pac-ssvxymatrix INTERFACE)

target_sources(pac-ssvxymatrix INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVXYMatrix/SSVXYMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SSVXYMatrix/SSVXYMatrix.h"
)

target_include_directories(pac-ssvxymatrix INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVXYMatrix"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ssvxymatrix INTERFACE
    arduino-compat
)
