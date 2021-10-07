add_library(pac-dotmatrix5x7 INTERFACE)

target_sources(pac-dotmatrix5x7 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DotMatrix5x7/src/DotMatrix5x7.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DotMatrix5x7/src/DotMatrix5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/DotMatrix5x7/src/dotfont5x7.h"
)

target_include_directories(pac-dotmatrix5x7 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DotMatrix5x7/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dotmatrix5x7 INTERFACE
    arduino-compat
)
