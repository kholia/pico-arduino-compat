add_library(touchevent INTERFACE)

target_sources(touchevent INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TouchEvent/src/TouchEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TouchEvent/src/TouchEvent.h"
)

target_include_directories(touchevent INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TouchEvent/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(touchevent INTERFACE
    arduino-compat
)
