add_library(advance-seven-segment INTERFACE)

target_sources(advance-seven-segment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AdvancedSevenSegment/src/AdvancedSevenSegment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AdvancedSevenSegment/src/AdvancedSevenSegment.h"
)

target_include_directories(advance-seven-segment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AdvancedSevenSegment/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(advance-seven-segment INTERFACE
    arduino-compat
)
