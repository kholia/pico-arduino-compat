add_library(pac-asyncstepperlib INTERFACE)

target_sources(pac-asyncstepperlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncStepper/src/AsyncStepper.hpp"
)

target_include_directories(pac-asyncstepperlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asyncstepperlib INTERFACE
    arduino-compat
)
