add_library(timerfour32u4 INTERFACE)

target_sources(timerfour32u4 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerFour/TimerFour.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerFour/TimerFour.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerFour/config/timer_four_pins.h"
)

target_include_directories(timerfour32u4 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerFour"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timerfour32u4 INTERFACE
    arduino-compat
)
