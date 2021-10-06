add_library(runningangle INTERFACE)

target_sources(runningangle INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/runningAngle/runningAngle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/runningAngle/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/runningAngle/runningAngle.h"
)

target_include_directories(runningangle INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/runningAngle"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(runningangle INTERFACE
    arduino-compat
)
