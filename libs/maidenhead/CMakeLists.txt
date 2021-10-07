add_library(pac-maidenhead INTERFACE)

target_sources(pac-maidenhead INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/maidenhead/example.c"
  "${CMAKE_CURRENT_LIST_DIR}/maidenhead/maidenhead.c"
  "${CMAKE_CURRENT_LIST_DIR}/maidenhead/maidenhead.h"
)

target_include_directories(pac-maidenhead INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/maidenhead"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-maidenhead INTERFACE
    arduino-compat
)
