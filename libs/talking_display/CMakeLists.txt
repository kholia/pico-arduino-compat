add_library(pac-talking_display INTERFACE)

target_sources(pac-talking_display INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Talking_Display/src/Talking_Display.h"
)

target_include_directories(pac-talking_display INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Talking_Display/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-talking_display INTERFACE
    arduino-compat
)
