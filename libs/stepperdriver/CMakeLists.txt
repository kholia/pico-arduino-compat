add_library(stepperdriver INTERFACE)

target_sources(stepperdriver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/BasicStepperDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/DRV8825.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/A4988.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/SyncDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/MultiDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/DRV8880.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/DRV8834.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/DRV8825.h"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/SyncDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/DRV8880.h"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/BasicStepperDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/DRV8834.h"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/A4988.h"
  "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src/MultiDriver.h"
)

target_include_directories(stepperdriver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StepperDriver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stepperdriver INTERFACE
    arduino-compat
)
