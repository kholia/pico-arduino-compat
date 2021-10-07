add_library(pac-slight_fade INTERFACE)

target_sources(pac-slight_fade INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/slight_Fade/src/slight_FaderLin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_Fade/src/slight_FaderLin.h"
)

target_include_directories(pac-slight_fade INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/slight_Fade/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-slight_fade INTERFACE
    arduino-compat
)
