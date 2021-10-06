add_library(megaavr_timerinterrupt INTERFACE)

target_sources(megaavr_timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src_cpp/megaAVR_ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src_cpp/megaAVR_TimerInterrupt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src_cpp/megaAVR_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src_cpp/megaAVR_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src/megaAVR_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src/megaAVR_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src/megaAVR_TimerInterrupt-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src/megaAVR_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src_h/megaAVR_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src_h/megaAVR_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src_h/megaAVR_TimerInterrupt-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src_h/megaAVR_ISR_Timer-Impl.h"
)

target_include_directories(megaavr_timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/megaAVR_TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(megaavr_timerinterrupt INTERFACE
    arduino-compat
)
