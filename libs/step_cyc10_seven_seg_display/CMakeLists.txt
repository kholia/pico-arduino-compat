add_library(pac-step_cyc10_seven_seg_display INTERFACE)

target_sources(pac-step_cyc10_seven_seg_display INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Step_CYC10_Seven_Seg_Display/src/Step_CYC10_Seven_Seg_Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Step_CYC10_Seven_Seg_Display/src/Step_CYC10_Seven_Seg_Display.h"
)

target_include_directories(pac-step_cyc10_seven_seg_display INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Step_CYC10_Seven_Seg_Display/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-step_cyc10_seven_seg_display INTERFACE
    arduino-compat
)
