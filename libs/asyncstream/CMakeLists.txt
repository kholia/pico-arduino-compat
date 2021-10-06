add_library(asyncstream INTERFACE)

target_sources(asyncstream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncStream/src/AsyncStream.h"
)

target_include_directories(asyncstream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncStream/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncstream INTERFACE
    arduino-compat
)
