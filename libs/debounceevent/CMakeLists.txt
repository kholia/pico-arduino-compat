add_library(pac-debounceevent INTERFACE)

target_sources(pac-debounceevent INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/debounceevent/src/DebounceEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/debounceevent/src/DebounceEvent.h"
)

target_include_directories(pac-debounceevent INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/debounceevent/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-debounceevent INTERFACE
    arduino-compat
)
