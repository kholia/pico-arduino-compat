add_library(pac-histogram INTERFACE)

target_sources(pac-histogram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Histogram/histogram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Histogram/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Histogram/histogram.h"
)

target_include_directories(pac-histogram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Histogram"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-histogram INTERFACE
    arduino-compat
)
