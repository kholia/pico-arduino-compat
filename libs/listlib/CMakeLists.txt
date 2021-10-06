add_library(listlib INTERFACE)

target_sources(listlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-List/src/ListLib.h"
)

target_include_directories(listlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-List/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(listlib INTERFACE
    arduino-compat
)
