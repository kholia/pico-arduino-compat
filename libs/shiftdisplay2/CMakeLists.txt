add_library(pac-shiftdisplay2 INTERFACE)

target_sources(pac-shiftdisplay2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay2/src/ShiftDisplay2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay2/src/ShiftDisplay2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay2/src/CharacterEncoding.h"
)

target_include_directories(pac-shiftdisplay2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftDisplay2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-shiftdisplay2 INTERFACE
    arduino-compat
)
