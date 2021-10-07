add_library(pac-medianfilterlib INTERFACE)

target_sources(pac-medianfilterlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MedianFilter/src/MedianFilterLib.h"
)

target_include_directories(pac-medianfilterlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-MedianFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-medianfilterlib INTERFACE
    arduino-compat
)
