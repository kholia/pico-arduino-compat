add_library(pac-shiftdisplay INTERFACE)

target_sources(pac-shiftdisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay/src/ShiftDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay/src/ShiftDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay/src/CharacterEncoding.h"
)

target_include_directories(pac-shiftdisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-shiftdisplay INTERFACE
    arduino-compat
)
