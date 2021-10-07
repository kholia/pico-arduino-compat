add_library(pac-statemachinelib INTERFACE)

target_sources(pac-statemachinelib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-StateMachine/src/StateMachineLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-StateMachine/src/StateMachineLib.h"
)

target_include_directories(pac-statemachinelib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-StateMachine/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-statemachinelib INTERFACE
    arduino-compat
)
