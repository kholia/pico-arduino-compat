add_library(tinkercontroller INTERFACE)

target_sources(tinkercontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinkerController-Library/src/TinkerController.h"
)

target_include_directories(tinkercontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinkerController-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinkercontroller INTERFACE
    arduino-compat
)
