add_library(medianfilterlib INTERFACE)

target_sources(medianfilterlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MedianFilter/src/MedianFilterLib.h"
)

target_include_directories(medianfilterlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-MedianFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(medianfilterlib INTERFACE
    arduino-compat
)
