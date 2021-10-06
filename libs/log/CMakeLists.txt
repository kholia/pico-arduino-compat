add_library(log INTERFACE)

target_sources(log INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-logger/src/log.h"
)

target_include_directories(log INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-logger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(log INTERFACE
    arduino-compat
)
