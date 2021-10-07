add_library(pac-taskjockey INTERFACE)

target_sources(pac-taskjockey INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TaskJockey/src/TaskJockey.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskJockey/src/TaskJockey.h"
)

target_include_directories(pac-taskjockey INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TaskJockey/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-taskjockey INTERFACE
    arduino-compat
)
