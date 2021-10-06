add_library(gyverpid INTERFACE)

target_sources(gyverpid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/src/PIDtuner.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/src/GyverPID.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/src/PIDtuner2.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/examples/autotune/thermistor-pwm/pid_autotune/thermistorMinim.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/examples/autotune/thermistor-pwm/PIDtest/thermistorMinim.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/examples/autotune/pcfan-pwm/pid_autotune/Tacho.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/examples/autotune/pcfan-pwm/PIDtest/Tacho.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/examples/autotune2/thermistor-pwm/pid_autotune/thermistorMinim.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/examples/autotune2/thermistor-pwm/PIDtest/thermistorMinim.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/examples/autotune2/pcfan-pwm/pid_autotune/Tacho.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPID/examples/autotune2/pcfan-pwm/PIDtest/Tacho.h"
)

target_include_directories(gyverpid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverPID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyverpid INTERFACE
    arduino-compat
)
