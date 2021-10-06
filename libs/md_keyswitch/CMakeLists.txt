add_library(md_keyswitch INTERFACE)

target_sources(md_keyswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_KeySwitch/src/MD_KeySwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_KeySwitch/src/MD_KeySwitch.h"
)

target_include_directories(md_keyswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_KeySwitch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_keyswitch INTERFACE
    arduino-compat
)
