add_library(taskjockey INTERFACE)

target_sources(taskjockey INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TaskJockey/src/TaskJockey.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskJockey/src/TaskJockey.h"
)

target_include_directories(taskjockey INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TaskJockey/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(taskjockey INTERFACE
    arduino-compat
)
