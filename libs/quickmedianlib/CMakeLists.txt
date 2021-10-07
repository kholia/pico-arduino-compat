add_library(pac-quickmedianlib INTERFACE)

target_sources(pac-quickmedianlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-QuickMedian/src/QuickMedianLib.h"
)

target_include_directories(pac-quickmedianlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-QuickMedian/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-quickmedianlib INTERFACE
    arduino-compat
)
