add_library(pac-joystick INTERFACE)

target_sources(pac-joystick INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-JOYSTICK/src/Joystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-JOYSTICK/src/Joystick.h"
)

target_include_directories(pac-joystick INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-JOYSTICK/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-joystick INTERFACE
    arduino-compat
)
