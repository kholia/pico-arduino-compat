add_library(md_ttt INTERFACE)

target_sources(md_ttt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_TicTacToe/src/MD_TTT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_TicTacToe/src/MD_TTT.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_TicTacToe/examples/MD_TTT_LCD/MD_TTT_LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_TicTacToe/examples/MD_TTT_GLCD_not working/MD_TTT_GLCD.h"
)

target_include_directories(md_ttt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_TicTacToe/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_ttt INTERFACE
    arduino-compat
)
