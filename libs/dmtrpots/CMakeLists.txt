add_library(dmtrpots INTERFACE)

target_sources(dmtrpots INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DmtrPots/DmtrPots.h"
)

target_include_directories(dmtrpots INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DmtrPots"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dmtrpots INTERFACE
    arduino-compat
)
