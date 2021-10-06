add_library(taskrunner INTERFACE)

target_sources(taskrunner INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Scheduler/src/Scheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Scheduler/src/Scheduler.h"
)

target_include_directories(taskrunner INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Scheduler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(taskrunner INTERFACE
    arduino-compat
)
