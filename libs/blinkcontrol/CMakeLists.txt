add_library(pac-blinkcontrol INTERFACE)

target_sources(pac-blinkcontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlinkControl/src/BlinkControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlinkControl/src/BlinkControl.h"
)

target_include_directories(pac-blinkcontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlinkControl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-blinkcontrol INTERFACE
    arduino-compat
)
