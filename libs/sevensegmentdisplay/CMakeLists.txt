add_library(sevensegmentdisplay INTERFACE)

target_sources(sevensegmentdisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_sevenSegmentDisplay/src/sevenSegmentDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_sevenSegmentDisplay/src/sevenSegmentDisplay.h"
)

target_include_directories(sevensegmentdisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_sevenSegmentDisplay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sevensegmentdisplay INTERFACE
    arduino-compat
)
