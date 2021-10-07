add_library(pac-teensy_timerinterrupt INTERFACE)

target_sources(pac-teensy_timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src_cpp/Teensy_ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src_cpp/Teensy_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src_cpp/TeensyTimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/Packages_Patches/hardware/teensy/avr/cores/teensy4/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/Packages_Patches/hardware/teensy/avr/cores/teensy3/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/Packages_Patches/hardware/teensy/avr/cores/teensy/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src/Teensy_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src/Teensy_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src/TeensyTimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src_h/Teensy_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src_h/Teensy_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src_h/TeensyTimerInterrupt.h"
)

target_include_directories(pac-teensy_timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Teensy_TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-teensy_timerinterrupt INTERFACE
    arduino-compat
)
