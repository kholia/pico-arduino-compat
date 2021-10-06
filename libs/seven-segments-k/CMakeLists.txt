add_library(seven-segments-k INTERFACE)

target_sources(seven-segments-k INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentsK/SevenSegmentsK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentsK/SevenSegmentsK.h"
)

target_include_directories(seven-segments-k INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentsK"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(seven-segments-k INTERFACE
    arduino-compat
)
