add_library(pac-pid_rt INTERFACE)

target_sources(pac-pid_rt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PID_RT/PID_RT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PID_RT/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PID_RT/PID_RT.h"
)

target_include_directories(pac-pid_rt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PID_RT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pid_rt INTERFACE
    arduino-compat
)
