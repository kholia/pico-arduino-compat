add_library(pac-timedpid INTERFACE)

target_sources(pac-timedpid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimedPID/TimedPID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimedPID/TimedPID.h"
)

target_include_directories(pac-timedpid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimedPID"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timedpid INTERFACE
    arduino-compat
)
