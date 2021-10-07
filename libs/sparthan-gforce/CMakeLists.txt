add_library(pac-sparthan-gforce INTERFACE)

target_sources(pac-sparthan-gforce INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sparthan-gforce/src/gforce.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sparthan-gforce/src/gforce.h"
)

target_include_directories(pac-sparthan-gforce INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sparthan-gforce/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparthan-gforce INTERFACE
    arduino-compat
)
