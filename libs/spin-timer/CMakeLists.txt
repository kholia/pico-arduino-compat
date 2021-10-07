add_library(pac-spin-timer INTERFACE)

target_sources(pac-spin-timer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/SpinTimerContext.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/SpinTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/UptimeInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/Examples/SimpleCounter/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/tests/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/tests/Test_SpinTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/Examples/SimpleCounter/MySpinTimerAction.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/SpinTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/SpinTimerContext.h"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/UptimeInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/Examples/UptimeInfoAdapter/Raspbian/RaspbianUptimeAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/Examples/UptimeInfoAdapter/STM32Cube/STM32UptimeInfoAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/tests/Mock_SpinTimerAction.h"
  "${CMAKE_CURRENT_LIST_DIR}/spin-timer/tests/Mock_UptimeInfo.h"
)

target_include_directories(pac-spin-timer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/spin-timer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spin-timer INTERFACE
    arduino-compat
)
