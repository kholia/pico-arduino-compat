add_library(pac-mergedstreams INTERFACE)

target_sources(pac-mergedstreams INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MergedStreams/MergedStreams.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MergedStreams/MergedStreams.h"
)

target_include_directories(pac-mergedstreams INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MergedStreams"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mergedstreams INTERFACE
    arduino-compat
)
