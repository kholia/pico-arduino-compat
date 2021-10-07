add_library(pac-esp32_c3_timerinterrupt INTERFACE)

target_sources(pac-esp32_c3_timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src_cpp/ESP32_C3_ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src_cpp/ESP32_C3_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src_cpp/ESP32_C3_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src/ESP32_C3_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src/ESP32_C3_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src/ESP32_C3_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src_h/ESP32_C3_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src_h/ESP32_C3_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src_h/ESP32_C3_ISR_Timer-Impl.h"
)

target_include_directories(pac-esp32_c3_timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32_C3_TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32_c3_timerinterrupt INTERFACE
    arduino-compat
)
