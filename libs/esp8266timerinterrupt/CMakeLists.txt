add_library(pac-esp8266timerinterrupt INTERFACE)

target_sources(pac-esp8266timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src_cpp/ESP8266_ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src_cpp/ESP8266_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src_cpp/ESP8266TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src/ESP8266_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src/ESP8266_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src/ESP8266TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src_h/ESP8266_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src_h/ESP8266_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src_h/ESP8266TimerInterrupt.h"
)

target_include_directories(pac-esp8266timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266timerinterrupt INTERFACE
    arduino-compat
)
