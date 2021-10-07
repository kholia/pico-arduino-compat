add_library(pac-triacdimmer INTERFACE)

target_sources(pac-triacdimmer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TriacDimmer/src/TriacDimmer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TriacDimmer/src/TriacDimmer.h"
)

target_include_directories(pac-triacdimmer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TriacDimmer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-triacdimmer INTERFACE
    arduino-compat
)
