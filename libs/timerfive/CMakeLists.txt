add_library(timerfive INTERFACE)

target_sources(timerfive INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerFive/TimerFive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerFive/TimerFive.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerFive/config/timer_five_pins.h"
)

target_include_directories(timerfive INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerFive"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timerfive INTERFACE
    arduino-compat
)
