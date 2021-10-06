add_library(lpd6803-rgb-pixels INTERFACE)

target_sources(lpd6803-rgb-pixels INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LPD6803-RGB-Pixels/LPD6803.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LPD6803-RGB-Pixels/LPD6803.h"
)

target_include_directories(lpd6803-rgb-pixels INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LPD6803-RGB-Pixels"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lpd6803-rgb-pixels INTERFACE
    arduino-compat
)
