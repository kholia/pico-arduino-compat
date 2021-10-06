add_library(accelstepperwithdistances INTERFACE)

target_sources(accelstepperwithdistances INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/accel-stepper-with-distances/src/AccelStepperWithDistance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/accel-stepper-with-distances/src/AccelStepperWithDistance.h"
)

target_include_directories(accelstepperwithdistances INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/accel-stepper-with-distances/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(accelstepperwithdistances INTERFACE
    arduino-compat
)
