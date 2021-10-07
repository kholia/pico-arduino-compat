add_library(pac-sevensegmentdisplay INTERFACE)

target_sources(pac-sevensegmentdisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_sevenSegmentDisplay/src/sevenSegmentDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_sevenSegmentDisplay/src/sevenSegmentDisplay.h"
)

target_include_directories(pac-sevensegmentdisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_sevenSegmentDisplay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sevensegmentdisplay INTERFACE
    arduino-compat
)
