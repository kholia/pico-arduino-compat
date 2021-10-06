add_library(elapsedmillis INTERFACE)

target_sources(elapsedmillis INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/elapsedMillis/elapsedMillis.h"
)

target_include_directories(elapsedmillis INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/elapsedMillis"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(elapsedmillis INTERFACE
    arduino-compat
)
