add_library(pac-averageangle INTERFACE)

target_sources(pac-averageangle INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AverageAngle/AverageAngle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AverageAngle/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AverageAngle/AverageAngle.h"
)

target_include_directories(pac-averageangle INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AverageAngle"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-averageangle INTERFACE
    arduino-compat
)
