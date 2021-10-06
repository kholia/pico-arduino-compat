add_library(gkscroll INTERFACE)

target_sources(gkscroll INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GKScroll/src/GKScroll.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GKScroll/src/GKScroll.h"
)

target_include_directories(gkscroll INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GKScroll/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gkscroll INTERFACE
    arduino-compat
)
