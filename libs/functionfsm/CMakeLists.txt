add_library(pac-functionfsm INTERFACE)

target_sources(pac-functionfsm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/function-fsm/src/FunctionFSM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/function-fsm/src/FunctionFSM.h"
)

target_include_directories(pac-functionfsm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/function-fsm/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-functionfsm INTERFACE
    arduino-compat
)
