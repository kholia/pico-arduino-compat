add_library(simplestepper INTERFACE)

target_sources(simplestepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SimpleStepper/src/SimpleStepperLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SimpleStepper/src/SimpleStepperLib.h"
)

target_include_directories(simplestepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SimpleStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simplestepper INTERFACE
    arduino-compat
)
