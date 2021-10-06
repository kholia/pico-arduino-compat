add_library(interval INTERFACE)

target_sources(interval INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Interval/Interval.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Interval/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Interval/Interval.h"
)

target_include_directories(interval INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Interval"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(interval INTERFACE
    arduino-compat
)
