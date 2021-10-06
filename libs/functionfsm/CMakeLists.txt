add_library(functionfsm INTERFACE)

target_sources(functionfsm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/function-fsm/src/FunctionFSM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/function-fsm/src/FunctionFSM.h"
)

target_include_directories(functionfsm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/function-fsm/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(functionfsm INTERFACE
    arduino-compat
)
