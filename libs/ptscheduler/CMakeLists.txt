add_library(ptscheduler INTERFACE)

target_sources(ptscheduler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ptScheduler/src/ptScheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ptScheduler/src/ptScheduler.h"
)

target_include_directories(ptscheduler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ptScheduler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ptscheduler INTERFACE
    arduino-compat
)
