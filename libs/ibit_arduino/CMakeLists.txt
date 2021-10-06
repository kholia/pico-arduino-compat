add_library(ibit_arduino INTERFACE)

target_sources(ibit_arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/iBit_Arduino/src/mbitServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iBit_Arduino/src/IBIT_Analog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iBit_Arduino/src/IBIT_Analog.h"
  "${CMAKE_CURRENT_LIST_DIR}/iBit_Arduino/src/IBIT_Motor.h"
  "${CMAKE_CURRENT_LIST_DIR}/iBit_Arduino/src/IBIT.h"
  "${CMAKE_CURRENT_LIST_DIR}/iBit_Arduino/src/IBIT_Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/iBit_Arduino/src/mbitServo.h"
)

target_include_directories(ibit_arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/iBit_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ibit_arduino INTERFACE
    arduino-compat
)
