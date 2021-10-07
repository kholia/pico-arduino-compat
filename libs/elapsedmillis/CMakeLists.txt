add_library(pac-elapsedmillis INTERFACE)

target_sources(pac-elapsedmillis INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/elapsedMillis/elapsedMillis.h"
)

target_include_directories(pac-elapsedmillis INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/elapsedMillis"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-elapsedmillis INTERFACE
    arduino-compat
)
