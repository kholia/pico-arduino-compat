add_library(pac-ptscheduler INTERFACE)

target_sources(pac-ptscheduler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ptScheduler/src/ptScheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ptScheduler/src/ptScheduler.h"
)

target_include_directories(pac-ptscheduler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ptScheduler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ptscheduler INTERFACE
    arduino-compat
)
