add_library(quicksortlib INTERFACE)

target_sources(quicksortlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-QuickSort/src/QuickSortLib.h"
)

target_include_directories(quicksortlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-QuickSort/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(quicksortlib INTERFACE
    arduino-compat
)
