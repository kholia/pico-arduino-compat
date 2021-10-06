add_library(inkyboard INTERFACE)

target_sources(inkyboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/InkyBoard/src/Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InkyBoard/src/InkyBoard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InkyBoard/src/InkyBoard.h"
  "${CMAKE_CURRENT_LIST_DIR}/InkyBoard/src/numbers.h"
  "${CMAKE_CURRENT_LIST_DIR}/InkyBoard/src/letters.h"
  "${CMAKE_CURRENT_LIST_DIR}/InkyBoard/src/Display.h"
)

target_include_directories(inkyboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/InkyBoard/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(inkyboard INTERFACE
    arduino-compat
)
