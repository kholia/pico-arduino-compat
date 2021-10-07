add_library(pac-rtl8720_timerinterrupt INTERFACE)

target_sources(pac-rtl8720_timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src_cpp/RTL8720_ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src_cpp/RTL8720_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src_cpp/RTL8720_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src/RTL8720_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src/RTL8720_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src/RTL8720_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src_h/RTL8720_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src_h/RTL8720_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src_h/RTL8720_TimerInterrupt.h"
)

target_include_directories(pac-rtl8720_timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTL8720_TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtl8720_timerinterrupt INTERFACE
    arduino-compat
)
