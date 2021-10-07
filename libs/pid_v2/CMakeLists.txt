add_library(pac-pid_v2 INTERFACE)

target_sources(pac-pid_v2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PID-Library/PID_v2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PID-Library/PID_v2.h"
)

target_include_directories(pac-pid_v2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-PID-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pid_v2 INTERFACE
    arduino-compat
)
