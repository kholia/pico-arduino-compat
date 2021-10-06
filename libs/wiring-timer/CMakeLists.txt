add_library(wiring-timer INTERFACE)

target_sources(wiring-timer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/wiring-timer/Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wiring-timer/TimerContext.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wiring-timer/UptimeInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wiring-timer/Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/wiring-timer/TimerContext.h"
  "${CMAKE_CURRENT_LIST_DIR}/wiring-timer/UptimeInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/wiring-timer/Examples/UptimeInfoAdapter/Raspbian/RaspbianUptimeAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/wiring-timer/Examples/UptimeInfoAdapter/STM32Cube/STM32UptimeInfoAdapter.h"
)

target_include_directories(wiring-timer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/wiring-timer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wiring-timer INTERFACE
    arduino-compat
)
