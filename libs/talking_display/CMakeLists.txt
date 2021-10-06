add_library(talking_display INTERFACE)

target_sources(talking_display INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Talking_Display/src/Talking_Display.h"
)

target_include_directories(talking_display INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Talking_Display/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(talking_display INTERFACE
    arduino-compat
)
