add_library(sandtimer INTERFACE)

target_sources(sandtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SandTimer/SandTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SandTimer/SandTimer.h"
)

target_include_directories(sandtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SandTimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sandtimer INTERFACE
    arduino-compat
)
