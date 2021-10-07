add_library(pac-md_cubo INTERFACE)

target_sources(pac-md_cubo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_4x4_ICS595.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_4x4_STC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_8x8_jC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_nxn_DirectIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_4x4_72xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_8x8_ICS574.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/examples/MD_Cubo_Demo/ColorShifter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_4x4_72xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_8x8_jC.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_8x8_ICS574.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_4x4_ICS595.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_nxn_DirectIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/ColorDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src/MD_Cubo_4x4_STC.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/examples/jolliCube_MD_Cubo_Demo_V1_0/MD_Cubo_Font.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/examples/MD_Cubo_Text_Scrolling/MD_Cubo_Font.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/examples/MD_Cubo_Demo_v2/MD_Cubo_Font.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/examples/MD_Cubo_Demo/ColorShifter.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/examples/MD_Cubo_Demo/MD_Cubo_Font.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/examples/MD_Cubo_Text_Receding/MD_Cubo_Font.h"
)

target_include_directories(pac-md_cubo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_Cubo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_cubo INTERFACE
    arduino-compat
)
