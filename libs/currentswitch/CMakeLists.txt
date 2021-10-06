add_library(currentswitch INTERFACE)

target_sources(currentswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CurrentSwitch/src/currentSwitch.h"
)

target_include_directories(currentswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CurrentSwitch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(currentswitch INTERFACE
    arduino-compat
)
