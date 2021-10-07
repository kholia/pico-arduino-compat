add_library(pac-simple-led-matrix INTERFACE)

target_sources(pac-simple-led-matrix INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Simple-LED-Matrix-Library/src/simple_matrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Simple-LED-Matrix-Library/src/simple_matrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/Simple-LED-Matrix-Library/src/font.h"
)

target_include_directories(pac-simple-led-matrix INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Simple-LED-Matrix-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simple-led-matrix INTERFACE
    arduino-compat
)
