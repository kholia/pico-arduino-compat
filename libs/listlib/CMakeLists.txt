add_library(pac-listlib INTERFACE)

target_sources(pac-listlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-List/src/ListLib.h"
)

target_include_directories(pac-listlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-List/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-listlib INTERFACE
    arduino-compat
)
