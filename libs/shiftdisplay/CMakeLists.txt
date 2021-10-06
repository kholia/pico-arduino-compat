add_library(shiftdisplay INTERFACE)

target_sources(shiftdisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay/src/ShiftDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay/src/ShiftDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay/src/CharacterEncoding.h"
)

target_include_directories(shiftdisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(shiftdisplay INTERFACE
    arduino-compat
)
