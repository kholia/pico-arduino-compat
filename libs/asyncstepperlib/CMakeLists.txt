add_library(asyncstepperlib INTERFACE)

target_sources(asyncstepperlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncStepper/src/AsyncStepper.hpp"
)

target_include_directories(asyncstepperlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncstepperlib INTERFACE
    arduino-compat
)
