add_library(medianfilterlib2 INTERFACE)

target_sources(medianfilterlib2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MedianFilter/src/MedianFilterLib2.h"
)

target_include_directories(medianfilterlib2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-MedianFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(medianfilterlib2 INTERFACE
    arduino-compat
)
