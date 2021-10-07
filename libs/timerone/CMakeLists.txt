add_library(pac-timerone INTERFACE)

target_sources(pac-timerone INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerOne/TimerOne.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerOne/TimerOne.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerOne/config/known_16bit_timers.h"
)

target_include_directories(pac-timerone INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerOne"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timerone INTERFACE
    arduino-compat
)
