add_library(highpowerstepperdriver INTERFACE)

target_sources(highpowerstepperdriver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/high-power-stepper-driver-arduino/HighPowerStepperDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-power-stepper-driver-arduino/HighPowerStepperDriver.h"
)

target_include_directories(highpowerstepperdriver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/high-power-stepper-driver-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(highpowerstepperdriver INTERFACE
    arduino-compat
)
