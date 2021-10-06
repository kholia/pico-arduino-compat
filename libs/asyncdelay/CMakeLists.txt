add_library(asyncdelay INTERFACE)

target_sources(asyncdelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDelay/src/AsyncDelay.h"
)

target_include_directories(asyncdelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncDelay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncdelay INTERFACE
    arduino-compat
)
