add_library(pac-variabletimedaction INTERFACE)

target_sources(pac-variabletimedaction INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VariableTimedAction/src/VariableTimedAction.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VariableTimedAction/src/VariableTimedAction.h"
)

target_include_directories(pac-variabletimedaction INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VariableTimedAction/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-variabletimedaction INTERFACE
    arduino-compat
)
