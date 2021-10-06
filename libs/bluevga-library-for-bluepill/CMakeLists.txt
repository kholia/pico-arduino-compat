add_library(bluevga-library-for-bluepill INTERFACE)

target_sources(bluevga-library-for-bluepill INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/src/bluebitmap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/src/Joystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/src/bluevga.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/src/bluevgadriver.c"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/src/bluevga.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/src/vgaProperties.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/src/Joystick.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/src/bluevgadriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/src/bluebitmap.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/printTest/font.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/printTest/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/reading_joystick/font.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/reading_joystick/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/hello_world/font.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/hello_world/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/Space_Invaders_Animation_Demo/graph_bitmaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/Space_Invaders_Animation_Demo/font.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/Space_Invaders_Animation_Demo/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/scolling_text/font.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/scolling_text/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/graphDemo_SineCurve/font.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/graphDemo_SineCurve/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/Elliptical_Text_Animation/font.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/Elliptical_Text_Animation/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/simple_demo/font.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/simple_demo/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/snake_byte_game/UserDefinedFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/examples/snake_byte_game/build_opt.h"
)

target_include_directories(bluevga-library-for-bluepill INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlueVGA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bluevga-library-for-bluepill INTERFACE
    arduino-compat
)
