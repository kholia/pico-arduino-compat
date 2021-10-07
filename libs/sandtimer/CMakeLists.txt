add_library(pac-sandtimer INTERFACE)

target_sources(pac-sandtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SandTimer/SandTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SandTimer/SandTimer.h"
)

target_include_directories(pac-sandtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SandTimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sandtimer INTERFACE
    arduino-compat
)
