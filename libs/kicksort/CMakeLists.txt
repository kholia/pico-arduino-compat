add_library(pac-kicksort INTERFACE)

target_sources(pac-kicksort INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KickSort/KickSort.h"
)

target_include_directories(pac-kicksort INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KickSort"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kicksort INTERFACE
    arduino-compat
)
