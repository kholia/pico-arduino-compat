add_library(joystick INTERFACE)

target_sources(joystick INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-JOYSTICK/src/Joystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-JOYSTICK/src/Joystick.h"
)

target_include_directories(joystick INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-JOYSTICK/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(joystick INTERFACE
    arduino-compat
)
