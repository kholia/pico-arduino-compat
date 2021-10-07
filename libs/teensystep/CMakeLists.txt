add_library(pac-teensystep INTERFACE)

target_sources(pac-teensystep INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/Stepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/ErrorHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/stm32/TimerField.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/generic/TickTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/teensy3/PIT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/teensy3/TeensyStepFTM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/examples/Applications/Winder/Winder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/ErrorHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/version.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/Stepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/MotorControlBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/TeensyStep.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/StepControlBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/RotateControlBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/TF_Handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/TimerFieldBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/stm32/TimerField.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/teensy4/ticktimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/teensy4/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/teensy4/TimerField.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/generic/TimerField.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/generic/TickTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/teensy3/TeensyStepFTM.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/teensy3/TimerField2.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/teensy3/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/timer/teensy3/PIT.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/accelerators/SinRotAccelerator.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/accelerators/LinStepAccelerator.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src/accelerators/LinRotAccelerator.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/examples/Applications/Winder/Winder.h"
)

target_include_directories(pac-teensystep INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TeensyStep/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-teensystep INTERFACE
    arduino-compat
)
