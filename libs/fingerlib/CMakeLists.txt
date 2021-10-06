add_library(fingerlib INTERFACE)

target_sources(fingerlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/FingerLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/pid/pid_controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/timers/timer_and_delay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/timers/samd_FingerTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/timers/avr_FingerTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/current_sense/samd_CurrentSense.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/FingerLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/pid/pid_controller.h"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/buffer/CircleBuff.h"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/timers/samd_FingerTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/timers/timer_and_delay.h"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/timers/avr_FingerTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src/current_sense/samd_CurrentSense.h"
)

target_include_directories(fingerlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FingerLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fingerlib INTERFACE
    arduino-compat
)
