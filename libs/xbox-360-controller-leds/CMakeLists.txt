add_library(xbox-360-controller-leds INTERFACE)

target_sources(xbox-360-controller-leds INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Xbox360ControllerLEDs/src/X360ControllerLEDs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Xbox360ControllerLEDs/src/X360ControllerLEDs.h"
)

target_include_directories(xbox-360-controller-leds INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Xbox360ControllerLEDs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xbox-360-controller-leds INTERFACE
    arduino-compat
)
