add_library(timerfour INTERFACE)

target_sources(timerfour INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerFour/TimerFour.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerFour/TimerFour.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerFour/config/timer_four_pins.h"
)

target_include_directories(timerfour INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerFour"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timerfour INTERFACE
    arduino-compat
)
