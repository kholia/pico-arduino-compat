add_library(md_uiswitch INTERFACE)

target_sources(md_uiswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_UISwitch/src/MD_UISwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_UISwitch/src/MD_UISwitch.h"
)

target_include_directories(md_uiswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_UISwitch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_uiswitch INTERFACE
    arduino-compat
)
