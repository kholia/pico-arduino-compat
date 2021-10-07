add_library(pac-sindormir-sevensegments INTERFACE)

target_sources(pac-sindormir-sevensegments INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SindormirSevenSegments/src/SindormirSevenSegments.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SindormirSevenSegments/src/SindormirSevenSegments.h"
)

target_include_directories(pac-sindormir-sevensegments INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SindormirSevenSegments/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sindormir-sevensegments INTERFACE
    arduino-compat
)
