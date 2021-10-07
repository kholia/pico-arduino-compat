add_library(pac-fastio INTERFACE)

target_sources(pac-fastio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/fastIO/src/fastIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/fastIO/src/fastIO.h"
)

target_include_directories(pac-fastio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/fastIO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fastio INTERFACE
    arduino-compat
)
