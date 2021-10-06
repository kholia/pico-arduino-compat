add_library(md_maxpanel INTERFACE)

target_sources(md_maxpanel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/src/MD_MAXPanel_Font.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/src/MD_MAXPanel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/src/MD_MAXPanel.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/src/MD_MAXPanel_lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Bricks/score.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Bricks/sound.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Bricks/Font5x3.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_TTT/MD_MAXPanel_TTT_Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_TTT/Font5x3.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Tetris/score.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Tetris/sound.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Tetris/randomseed.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Tetris/Font5x3.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Snake/score.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Snake/sound.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Snake/randomseed.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Snake/Font5x3.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Meteor/score.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Meteor/sound.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Meteor/randomseed.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Meteor/Font5x3.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_GameOfLife/randomseed.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Pong/score.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Pong/sound.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Pong/Font5x3.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/examples/MD_MAXPanel_Test/Font5x3.h"
)

target_include_directories(md_maxpanel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_MAXPanel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_maxpanel INTERFACE
    arduino-compat
)
