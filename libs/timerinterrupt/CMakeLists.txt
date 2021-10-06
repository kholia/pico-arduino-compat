add_library(timerinterrupt INTERFACE)

target_sources(timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src_cpp/TimerInterrupt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src_cpp/ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src_cpp/ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src_cpp/TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src/TimerInterrupt-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src/ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src/TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src/ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src_h/TimerInterrupt-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src_h/ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src_h/TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src_h/ISR_Timer-Impl.h"
)

target_include_directories(timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timerinterrupt INTERFACE
    arduino-compat
)
