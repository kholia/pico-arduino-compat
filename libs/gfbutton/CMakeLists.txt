add_library(gfbutton INTERFACE)

target_sources(gfbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/gfbutton/src/GFButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gfbutton/src/GFButton.h"
)

target_include_directories(gfbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/gfbutton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gfbutton INTERFACE
    arduino-compat
)
