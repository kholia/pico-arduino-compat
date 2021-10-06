add_library(pablo INTERFACE)

target_sources(pablo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pablo/src/Pablo.Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pablo/src/Pablo.RotaryKnob.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pablo/src/PabloAccelStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pablo/src/Pablo.MotorControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pablo/src/Pablo.DefaultMode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pablo/src/Pablo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pablo/src/Pablo.Buttons.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pablo/src/PabloAccelStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pablo/src/Pablo.h"
)

target_include_directories(pablo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pablo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pablo INTERFACE
    arduino-compat
)
