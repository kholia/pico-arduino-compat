add_library(pac-highpowerstepperdriver INTERFACE)

target_sources(pac-highpowerstepperdriver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/high-power-stepper-driver-arduino/HighPowerStepperDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-power-stepper-driver-arduino/HighPowerStepperDriver.h"
)

target_include_directories(pac-highpowerstepperdriver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/high-power-stepper-driver-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-highpowerstepperdriver INTERFACE
    arduino-compat
)
