add_library(pac-accelstepperwithdistances INTERFACE)

target_sources(pac-accelstepperwithdistances INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/accel-stepper-with-distances/src/AccelStepperWithDistance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/accel-stepper-with-distances/src/AccelStepperWithDistance.h"
)

target_include_directories(pac-accelstepperwithdistances INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/accel-stepper-with-distances/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-accelstepperwithdistances INTERFACE
    arduino-compat
)
