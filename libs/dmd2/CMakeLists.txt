add_library(pac-dmd2 INTERFACE)

target_sources(pac-dmd2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/DMD2_TextBox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/DMD2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/DMDFrame.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/DMD2_Text.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/DMD2_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/DMD2.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/fonts/Arial14.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/fonts/Droid_Sans_16.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/fonts/Droid_Sans_12.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/fonts/SystemFont5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/fonts/Arial_Black_16.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD2/fonts/Droid_Sans_24.h"
)

target_include_directories(pac-dmd2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DMD2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dmd2 INTERFACE
    arduino-compat
)
