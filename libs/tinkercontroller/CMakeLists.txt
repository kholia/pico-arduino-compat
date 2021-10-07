add_library(pac-tinkercontroller INTERFACE)

target_sources(pac-tinkercontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinkerController-Library/src/TinkerController.h"
)

target_include_directories(pac-tinkercontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinkerController-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinkercontroller INTERFACE
    arduino-compat
)
