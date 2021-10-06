add_library(statemachine INTERFACE)

target_sources(statemachine INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StateMachine/src/State.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StateMachine/src/StateMachine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StateMachine/src/StateMachine.h"
  "${CMAKE_CURRENT_LIST_DIR}/StateMachine/src/State.h"
)

target_include_directories(statemachine INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StateMachine/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(statemachine INTERFACE
    arduino-compat
)
