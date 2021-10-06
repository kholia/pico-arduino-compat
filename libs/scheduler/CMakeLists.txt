add_library(scheduler INTERFACE)

target_sources(scheduler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Scheduler/src/Scheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Scheduler/src/Scheduler.h"
)

target_include_directories(scheduler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Scheduler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(scheduler INTERFACE
    arduino-compat
)
