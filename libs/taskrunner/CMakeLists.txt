add_library(pac-taskrunner INTERFACE)

target_sources(pac-taskrunner INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Scheduler/src/Scheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Scheduler/src/Scheduler.h"
)

target_include_directories(pac-taskrunner INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Scheduler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-taskrunner INTERFACE
    arduino-compat
)
