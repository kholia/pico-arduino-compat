add_library(pac-steppercontrol INTERFACE)

target_sources(pac-steppercontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StepperControl/StepperControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StepperControl/StepperControl.h"
)

target_include_directories(pac-steppercontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StepperControl"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-steppercontrol INTERFACE
    arduino-compat
)
