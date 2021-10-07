add_library(pac-kickmath INTERFACE)

target_sources(pac-kickmath INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KickMath/KickMath.h"
)

target_include_directories(pac-kickmath INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KickMath"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kickmath INTERFACE
    arduino-compat
)
