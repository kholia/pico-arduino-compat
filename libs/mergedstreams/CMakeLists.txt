add_library(mergedstreams INTERFACE)

target_sources(mergedstreams INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MergedStreams/MergedStreams.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MergedStreams/MergedStreams.h"
)

target_include_directories(mergedstreams INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MergedStreams"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mergedstreams INTERFACE
    arduino-compat
)
