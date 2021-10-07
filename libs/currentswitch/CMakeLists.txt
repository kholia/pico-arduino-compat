add_library(pac-currentswitch INTERFACE)

target_sources(pac-currentswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CurrentSwitch/src/currentSwitch.h"
)

target_include_directories(pac-currentswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CurrentSwitch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-currentswitch INTERFACE
    arduino-compat
)
