add_library(pac-kickfiltersrt INTERFACE)

target_sources(pac-kickfiltersrt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KickFiltersRT/KickFiltersRT.h"
)

target_include_directories(pac-kickfiltersrt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KickFiltersRT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kickfiltersrt INTERFACE
    arduino-compat
)
