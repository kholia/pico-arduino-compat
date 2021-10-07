add_library(pac-scrollingtext8x8display INTERFACE)

target_sources(pac-scrollingtext8x8display INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ScrollingText8x8Display/ScrollingText8x8Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ScrollingText8x8Display/ScrollingText8x8Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/ScrollingText8x8Display/font_8x8.h"
)

target_include_directories(pac-scrollingtext8x8display INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ScrollingText8x8Display"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-scrollingtext8x8display INTERFACE
    arduino-compat
)
