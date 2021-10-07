add_library(pac-arcpid INTERFACE)

target_sources(pac-arcpid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArcPID/linux/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArcPID/src/LimitedPID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArcPID/src/PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArcPID/linux/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArcPID/src/LimitedPID.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArcPID/src/PID.h"
)

target_include_directories(pac-arcpid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArcPID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arcpid INTERFACE
    arduino-compat
)
