add_library(blinkcontrol INTERFACE)

target_sources(blinkcontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlinkControl/src/BlinkControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlinkControl/src/BlinkControl.h"
)

target_include_directories(blinkcontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlinkControl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(blinkcontrol INTERFACE
    arduino-compat
)
