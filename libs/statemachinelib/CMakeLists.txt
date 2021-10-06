add_library(statemachinelib INTERFACE)

target_sources(statemachinelib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-StateMachine/src/StateMachineLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-StateMachine/src/StateMachineLib.h"
)

target_include_directories(statemachinelib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-StateMachine/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(statemachinelib INTERFACE
    arduino-compat
)
