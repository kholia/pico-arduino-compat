add_library(averageangle INTERFACE)

target_sources(averageangle INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AverageAngle/AverageAngle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AverageAngle/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AverageAngle/AverageAngle.h"
)

target_include_directories(averageangle INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AverageAngle"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(averageangle INTERFACE
    arduino-compat
)
