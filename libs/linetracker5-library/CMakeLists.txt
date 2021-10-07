add_library(pac-linetracker5-library INTERFACE)

target_sources(pac-linetracker5-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LineTracker5/LineTracker5.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LineTracker5/LineTracker5.h"
)

target_include_directories(pac-linetracker5-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LineTracker5"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-linetracker5-library INTERFACE
    arduino-compat
)
