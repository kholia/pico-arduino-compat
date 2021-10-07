add_library(pac-sevensegmentsdisp INTERFACE)

target_sources(pac-sevensegmentsdisp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentsDisp/src/Disp595_symbols.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentsDisp/src/Disp595.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentsDisp/src/SevenSegmentsDisp.h"
)

target_include_directories(pac-sevensegmentsdisp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentsDisp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sevensegmentsdisp INTERFACE
    arduino-compat
)
