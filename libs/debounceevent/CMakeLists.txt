add_library(debounceevent INTERFACE)

target_sources(debounceevent INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/debounceevent/src/DebounceEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/debounceevent/src/DebounceEvent.h"
)

target_include_directories(debounceevent INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/debounceevent/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(debounceevent INTERFACE
    arduino-compat
)
