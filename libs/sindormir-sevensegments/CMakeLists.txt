add_library(sindormir-sevensegments INTERFACE)

target_sources(sindormir-sevensegments INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SindormirSevenSegments/src/SindormirSevenSegments.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SindormirSevenSegments/src/SindormirSevenSegments.h"
)

target_include_directories(sindormir-sevensegments INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SindormirSevenSegments/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sindormir-sevensegments INTERFACE
    arduino-compat
)
