add_library(lcdprogressbar INTERFACE)

target_sources(lcdprogressbar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBar/src/LcdProgressBar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBar/src/LcdProgressBar.h"
)

target_include_directories(lcdprogressbar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdProgressBar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(lcdprogressbar INTERFACE
    arduino-compat
    official-liquid-crystal
)
