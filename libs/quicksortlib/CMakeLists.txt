add_library(pac-quicksortlib INTERFACE)

target_sources(pac-quicksortlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-QuickSort/src/QuickSortLib.h"
)

target_include_directories(pac-quicksortlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-QuickSort/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-quicksortlib INTERFACE
    arduino-compat
)
