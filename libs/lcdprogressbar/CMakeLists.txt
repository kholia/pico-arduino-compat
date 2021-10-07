add_library(pac-lcdprogressbar INTERFACE)

target_sources(pac-lcdprogressbar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBar/src/LcdProgressBar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBar/src/LcdProgressBar.h"
)

target_include_directories(pac-lcdprogressbar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-lcdprogressbar INTERFACE
    arduino-compat
    pac-liquidcrystal
)
