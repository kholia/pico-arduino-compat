add_library(pac-touchevent INTERFACE)

target_sources(pac-touchevent INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TouchEvent/src/TouchEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TouchEvent/src/TouchEvent.h"
)

target_include_directories(pac-touchevent INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TouchEvent/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-touchevent INTERFACE
    arduino-compat
)
