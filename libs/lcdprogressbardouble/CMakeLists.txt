add_library(pac-lcdprogressbardouble INTERFACE)

target_sources(pac-lcdprogressbardouble INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBarDouble/src/LcdProgressBarDouble.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBarDouble/src/LcdProgressBarDouble.h"
)

target_include_directories(pac-lcdprogressbardouble INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBarDouble/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-lcdprogressbardouble INTERFACE
    arduino-compat
    pac-liquidcrystal
)
