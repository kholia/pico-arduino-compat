add_library(dmstepper INTERFACE)

target_sources(dmstepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DMStepper/src/dmstepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMStepper/src/speedfunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMStepper/src/dmsteppergroup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMStepper/src/speedfunctions.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMStepper/src/dmstepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMStepper/src/dmsteppergroup.h"
)

target_include_directories(dmstepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DMStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dmstepper INTERFACE
    arduino-compat
)
