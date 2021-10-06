add_library(kickfilters INTERFACE)

target_sources(kickfilters INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KickFilters/KickFilters.h"
)

target_include_directories(kickfilters INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KickFilters"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kickfilters INTERFACE
    arduino-compat
)
