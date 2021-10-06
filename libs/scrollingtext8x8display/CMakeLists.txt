add_library(scrollingtext8x8display INTERFACE)

target_sources(scrollingtext8x8display INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ScrollingText8x8Display/ScrollingText8x8Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ScrollingText8x8Display/ScrollingText8x8Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/ScrollingText8x8Display/font_8x8.h"
)

target_include_directories(scrollingtext8x8display INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ScrollingText8x8Display"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(scrollingtext8x8display INTERFACE
    arduino-compat
)
