add_library(pac-md_max72xx INTERFACE)

target_sources(pac-md_max72xx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/src/MD_MAX72xx_font.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/src/MD_MAX72xx_buf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/src/MD_MAX72xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/src/MD_MAX72xx_pix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/examples/MD_MAX72xx_Eyes/MD_EyePair.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/examples/MD_MAX72xx_RobotEyes/MD_RobotEyes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/Font Builder/src/font2txt/font2txt.c"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/Font Builder/src/txt2font/txt2font.c"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/Font Builder/src/font2txt/txt2font.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/Font Builder/src/txt2font/txt2font.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/src/MD_MAX72xx_lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/src/MD_MAX72xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/examples/MD_MAX72xx_Eyes/MD_EyePair.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/examples/MD_MAX72xx_RobotEyes/MD_RobotEyes.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/examples/MD_MAX72xx_RobotEyes/MD_RobotEyes_Data.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/examples/MD_MAX72xx_PushWheel/Font_Data.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/examples/MD_MAX72xx_SimpleSlots/FontSymbols.h"
)

target_include_directories(pac-md_max72xx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_MAX72XX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_max72xx INTERFACE
    arduino-compat
)
