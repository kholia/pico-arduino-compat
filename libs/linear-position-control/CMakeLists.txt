add_library(linear-position-control INTERFACE)

target_sources(linear-position-control INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/StateVariable.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/LinearPositionControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Signal/Smoothing.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Control/AbsoluteLinearPosition.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Control/LinearPosition.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Control/CumulativeLinearPosition.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Control/PID.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Components/Motors.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Components/DebouncedButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Components/AnalogSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Components/LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Components/AngleSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src/Components/FastInterrupts.h"
)

target_include_directories(linear-position-control INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/linear-position-control/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(linear-position-control INTERFACE
    arduino-compat
)
