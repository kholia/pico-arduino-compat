add_library(pac-kickfilters INTERFACE)

target_sources(pac-kickfilters INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KickFilters/KickFilters.h"
)

target_include_directories(pac-kickfilters INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KickFilters"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kickfilters INTERFACE
    arduino-compat
)
