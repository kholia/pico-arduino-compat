add_library(pac-balboa32u4 INTERFACE)

target_sources(pac-balboa32u4 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Pushbutton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/PololuHD44780.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Balboa32U4Motors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/PololuBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/QTRSensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Balboa32U4Encoders.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/examples/Balancer/Balance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Balboa32U4Buttons.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Balboa32U4Buzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Balboa32U4Encoders.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/FastGPIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Pushbutton.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/QTRSensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Balboa32U4Motors.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/PololuHD44780.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Balboa32U4LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Balboa32U4.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/PololuBuzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/USBPause.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/Balboa32U4LineSensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library/examples/Balancer/Balance.h"
)

target_include_directories(pac-balboa32u4 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/balboa-32u4-arduino-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-balboa32u4 INTERFACE
    arduino-compat
)
