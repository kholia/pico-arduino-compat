add_library(lcdprogressbardouble INTERFACE)

target_sources(lcdprogressbardouble INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBarDouble/src/LcdProgressBarDouble.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBarDouble/src/LcdProgressBarDouble.h"
)

target_include_directories(lcdprogressbardouble INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBarDouble/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(lcdprogressbardouble INTERFACE
    arduino-compat
    official-liquid-crystal
)
