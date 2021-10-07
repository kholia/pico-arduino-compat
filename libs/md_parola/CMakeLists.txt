add_library(pac-md_parola INTERFACE)

target_sources(pac-md_parola INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Blinds.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_VScroll.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Sprite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Random.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Grow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Print.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Wipe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Mesh.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Slice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Close.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Diag.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_HScroll.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Fade.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Open.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Dissolve.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_Scan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_PZone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola_lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src/MD_Parola.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/examples/Parola_Double_Height_Scoreboard/Font_Data.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/examples/Parola_Double_Height_Test/Font_Data.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/examples/Parola_Double_Height_Clock/Font_Data.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/examples/Parola_Scrolling_Vertical/Parola_Fonts_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/examples/Parola_Double_Height_v2/Font_Data.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/examples/Parola_Fonts/Parola_Fonts_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/examples/Parola_Double_Height_v1/Font_Data.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/examples/Parola_UFT-8_Display/Parola_Fonts_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/examples/Parola_Double_Height_v1_Russian/Font_Data_RUS.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/examples/Parola_Zone_TimeMsg/Font_Data.h"
)

target_include_directories(pac-md_parola INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_Parola/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_parola INTERFACE
    arduino-compat
)
