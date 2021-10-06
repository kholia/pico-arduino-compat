add_library(esp32_new_timerinterrupt INTERFACE)

target_sources(esp32_new_timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src_cpp/ESP32_New_ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src_cpp/ESP32_New_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src_cpp/ESP32_New_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src/ESP32_New_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src/ESP32_New_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src/ESP32_New_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src_h/ESP32_New_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src_h/ESP32_New_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src_h/ESP32_New_ISR_Timer.h"
)

target_include_directories(esp32_new_timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32_New_TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32_new_timerinterrupt INTERFACE
    arduino-compat
)
