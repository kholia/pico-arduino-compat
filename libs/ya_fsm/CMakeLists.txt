add_library(pac-ya_fsm INTERFACE)

target_sources(pac-ya_fsm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YA_FSM/src/YA_FSM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YA_FSM/src/YA_FSM.h"
)

target_include_directories(pac-ya_fsm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YA_FSM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ya_fsm INTERFACE
    arduino-compat
)
