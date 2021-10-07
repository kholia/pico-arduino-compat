add_library(pac-dmtrpots INTERFACE)

target_sources(pac-dmtrpots INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DmtrPots/DmtrPots.h"
)

target_include_directories(pac-dmtrpots INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DmtrPots"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dmtrpots INTERFACE
    arduino-compat
)
