add_library(kickmath INTERFACE)

target_sources(kickmath INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KickMath/KickMath.h"
)

target_include_directories(kickmath INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KickMath"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kickmath INTERFACE
    arduino-compat
)
