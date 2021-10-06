add_library(pid_rt INTERFACE)

target_sources(pid_rt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PID_RT/PID_RT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PID_RT/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PID_RT/PID_RT.h"
)

target_include_directories(pid_rt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PID_RT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pid_rt INTERFACE
    arduino-compat
)
