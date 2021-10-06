add_library(steppercontrol INTERFACE)

target_sources(steppercontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StepperControl/StepperControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StepperControl/StepperControl.h"
)

target_include_directories(steppercontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StepperControl"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(steppercontrol INTERFACE
    arduino-compat
)
