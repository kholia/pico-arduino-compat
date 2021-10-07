add_library(pac-buttonking INTERFACE)

target_sources(pac-buttonking INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ButtonKing/ButtonKing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonKing/ButtonKing.h"
)

target_include_directories(pac-buttonking INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ButtonKing"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-buttonking INTERFACE
    arduino-compat
)
