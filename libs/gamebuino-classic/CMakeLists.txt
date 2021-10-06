add_library(gamebuino-classic INTERFACE)

target_sources(gamebuino-classic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/Gamebuino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/Backlight.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/Sound.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/Battery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/Buttons.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/font5x7.c"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/settings.c"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/font3x5.c"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/font3x3.c"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/Gamebuino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/Battery.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/Buttons.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/Sound.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic/utility/Backlight.h"
)

target_include_directories(gamebuino-classic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Gamebuino-Classic"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gamebuino-classic INTERFACE
    arduino-compat
)
