add_library(pac-gyverstepper INTERFACE)

target_sources(pac-gyverstepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverStepper/src/GStypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverStepper/src/GyverStepper2.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverStepper/src/FIFO.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverStepper/src/StepperCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverStepper/src/GyverPlanner2.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverStepper/src/GyverPlanner.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverStepper/src/GyverStepper.h"
)

target_include_directories(pac-gyverstepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverstepper INTERFACE
    arduino-compat
)
