add_library(kickfiltersrt INTERFACE)

target_sources(kickfiltersrt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KickFiltersRT/KickFiltersRT.h"
)

target_include_directories(kickfiltersrt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KickFiltersRT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kickfiltersrt INTERFACE
    arduino-compat
)
