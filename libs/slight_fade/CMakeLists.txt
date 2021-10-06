add_library(slight_fade INTERFACE)

target_sources(slight_fade INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/slight_Fade/src/slight_FaderLin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_Fade/src/slight_FaderLin.h"
)

target_include_directories(slight_fade INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/slight_Fade/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(slight_fade INTERFACE
    arduino-compat
)
