add_library(pac-medianfilterlib2 INTERFACE)

target_sources(pac-medianfilterlib2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MedianFilter/src/MedianFilterLib2.h"
)

target_include_directories(pac-medianfilterlib2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-MedianFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-medianfilterlib2 INTERFACE
    arduino-compat
)
