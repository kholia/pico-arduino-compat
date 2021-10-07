add_library(pac-better-joystick INTERFACE)

target_sources(pac-better-joystick INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/better-joystick/src/BetterJoystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/better-joystick/src/BetterJoystick.h"
)

target_include_directories(pac-better-joystick INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/better-joystick/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-better-joystick INTERFACE
    arduino-compat
)
