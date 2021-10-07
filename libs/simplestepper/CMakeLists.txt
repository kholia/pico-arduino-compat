add_library(pac-simplestepper INTERFACE)

target_sources(pac-simplestepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SimpleStepper/src/SimpleStepperLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SimpleStepper/src/SimpleStepperLib.h"
)

target_include_directories(pac-simplestepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SimpleStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplestepper INTERFACE
    arduino-compat
)
