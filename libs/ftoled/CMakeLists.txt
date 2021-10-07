add_library(pac-ftoled INTERFACE)

target_sources(pac-ftoled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/FTOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/FTOLED_BMP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/FTOLED_TextBox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/FTOLED_Text.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/FTOLED_Colours.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/FTOLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/progmem_compat.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/fonts/Droid_Sans_128.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/fonts/Arial14.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/fonts/Droid_Sans_96.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/fonts/Droid_Sans_16.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/fonts/Droid_Sans_12.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/fonts/SystemFont5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/fonts/Arial_Black_16.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/fonts/Droid_Sans_24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/fonts/Droid_Sans_64.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/fonts/Droid_Sans_36.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/examples/tankgame/frames.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTOLED/examples/sprite/frames.h"
)

target_include_directories(pac-ftoled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FTOLED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-ftoled INTERFACE
    arduino-compat
    pac-sd
)
