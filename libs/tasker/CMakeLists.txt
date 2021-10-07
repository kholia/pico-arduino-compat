add_library(pac-tasker INTERFACE)

target_sources(pac-tasker INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tasker/Tasker.h"
)

target_include_directories(pac-tasker INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-tasker"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tasker INTERFACE
    arduino-compat
)
