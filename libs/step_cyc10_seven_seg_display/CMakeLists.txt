add_library(step_cyc10_seven_seg_display INTERFACE)

target_sources(step_cyc10_seven_seg_display INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Step_CYC10_Seven_Seg_Display/src/Step_CYC10_Seven_Seg_Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Step_CYC10_Seven_Seg_Display/src/Step_CYC10_Seven_Seg_Display.h"
)

target_include_directories(step_cyc10_seven_seg_display INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Step_CYC10_Seven_Seg_Display/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(step_cyc10_seven_seg_display INTERFACE
    arduino-compat
)
