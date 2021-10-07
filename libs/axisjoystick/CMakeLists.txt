add_library(pac-axisjoystick INTERFACE)

target_sources(pac-axisjoystick INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/XYReplacerJoystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/YInverterJoystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/DelegateJoystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/XInverterJoystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/AxisJoystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/XInverterJoystick.h"
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/Joystick.h"
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/XYReplacerJoystick.h"
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/AxisJoystick.h"
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/DelegateJoystick.h"
  "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src/YInverterJoystick.h"
)

target_include_directories(pac-axisjoystick INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AxisJoystick/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-axisjoystick INTERFACE
    arduino-compat
)
