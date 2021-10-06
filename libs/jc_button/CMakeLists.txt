add_library(jc_button INTERFACE)

target_sources(jc_button INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JC_Button/src/JC_Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JC_Button/src/JC_Button.h"
)

target_include_directories(jc_button INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JC_Button/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jc_button INTERFACE
    arduino-compat
)
