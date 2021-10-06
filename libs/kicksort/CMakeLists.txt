add_library(kicksort INTERFACE)

target_sources(kicksort INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KickSort/KickSort.h"
)

target_include_directories(kicksort INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KickSort"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kicksort INTERFACE
    arduino-compat
)
