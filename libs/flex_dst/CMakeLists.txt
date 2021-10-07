add_library(pac-flex_dst INTERFACE)

target_sources(pac-flex_dst INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/flex_DST/src/flex_DST.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/flex_DST/src/flex_DST.h"
)

target_include_directories(pac-flex_dst INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/flex_DST/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flex_dst INTERFACE
    arduino-compat
)
