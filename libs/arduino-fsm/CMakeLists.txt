add_library(pac-arduino-fsm INTERFACE)

target_sources(pac-arduino-fsm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-fsm/Fsm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-fsm/examples/timed_switchoff/Fsm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-fsm/Fsm.h"
)

target_include_directories(pac-arduino-fsm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-fsm"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-fsm INTERFACE
    arduino-compat
)
