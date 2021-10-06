add_library(esp8266_isr_servo INTERFACE)

target_sources(esp8266_isr_servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_ISR_Servo/src/ESP8266_ISR_Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_ISR_Servo/src/ESP8266_ISR_Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_ISR_Servo/src/ESP8266FastTimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_ISR_Servo/examples/ESP8266_BlynkServoControl/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_ISR_Servo/examples/ESP8266_BlynkServoControl/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_ISR_Servo/examples/ESP8266_BlynkServoControl/Credentials.h"
)

target_include_directories(esp8266_isr_servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266_ISR_Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp8266_isr_servo INTERFACE
    arduino-compat
)
