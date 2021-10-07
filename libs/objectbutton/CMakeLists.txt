add_library(pac-objectbutton INTERFACE)

target_sources(pac-objectbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/test/action_click.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/test/millis_counter_overflow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/test/analog_button_action_pressed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/test/action_double_click.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/test/action_press_release.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/test/sanity_checks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/base/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/digital/DigitalSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/digital/DigitalButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/analog/AnalogButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/analog/AnalogSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/test/mocks/ListenerMock.h"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/doc/ObjectButton_DoxygenMainPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/ObjectButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/base/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/digital/DigitalSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/digital/DigitalButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/interfaces/IOnClickListener.h"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/interfaces/IOnPressListener.h"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/interfaces/IOnDoubleClickListener.h"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/analog/AnalogSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src/analog/AnalogButton.h"
)

target_include_directories(pac-objectbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ObjectButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-objectbutton INTERFACE
    arduino-compat
)
