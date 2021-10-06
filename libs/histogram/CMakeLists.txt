add_library(histogram INTERFACE)

target_sources(histogram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Histogram/histogram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Histogram/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Histogram/histogram.h"
)

target_include_directories(histogram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Histogram"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(histogram INTERFACE
    arduino-compat
)
