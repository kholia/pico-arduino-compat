add_library(ifx9201_xmc1300_steppermotor INTERFACE)

target_sources(ifx9201_xmc1300_steppermotor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Stepper-Motor-Shield-IFX9201-XMC1300/src/IFX9201_XMC1300_StepperMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Stepper-Motor-Shield-IFX9201-XMC1300/src/IFX9201_XMC1300_StepperMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Stepper-Motor-Shield-IFX9201-XMC1300/src/util/IFX9201_XMC1300_StepperMotor_consts.h"
)

target_include_directories(ifx9201_xmc1300_steppermotor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Stepper-Motor-Shield-IFX9201-XMC1300/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ifx9201_xmc1300_steppermotor INTERFACE
    arduino-compat
)
