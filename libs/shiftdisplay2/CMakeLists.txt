add_library(shiftdisplay2 INTERFACE)

target_sources(shiftdisplay2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay2/src/ShiftDisplay2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay2/src/ShiftDisplay2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay2/src/CharacterEncoding.h"
)

target_include_directories(shiftdisplay2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(shiftdisplay2 INTERFACE
    arduino-compat
)
