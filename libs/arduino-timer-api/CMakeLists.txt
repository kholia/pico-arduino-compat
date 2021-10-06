add_library(arduino-timer-api INTERFACE)

target_sources(arduino-timer-api INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-timer-api/src/avr/timer_setup.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-timer-api/src/avr/timer_freq.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-timer-api/src/pic32/timer_setup.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-timer-api/src/pic32/timer_freq.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-timer-api/src/sam/timer_setup.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-timer-api/src/sam/timer_freq.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-timer-api/src/timer_setup.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-timer-api/src/timer-api.h"
)

target_include_directories(arduino-timer-api INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-timer-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino-timer-api INTERFACE
    arduino-compat
)
