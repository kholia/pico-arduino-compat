add_library(ssvtimer INTERFACE)

target_sources(ssvtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVTimer/SSVTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SSVTimer/SSVTimer.h"
)

target_include_directories(ssvtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVTimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ssvtimer INTERFACE
    arduino-compat
)
