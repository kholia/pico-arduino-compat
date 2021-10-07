add_library(pac-log INTERFACE)

target_sources(pac-log INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-logger/src/log.h"
)

target_include_directories(pac-log INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-logger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-log INTERFACE
    arduino-compat
)
