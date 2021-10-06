add_library(mobatools INTERFACE)

target_sources(mobatools INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/avr/MoToAVR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp32/MoToESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToPwmESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToSoftled.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToSoftledESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToSoftled32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/stm32f4/MoToSTM32F4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/stm32f1/MoToSTM32F1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp8266/ESP8266_waveform.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp8266/MoToESP8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/avr/driversAVR.c"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp32/driversESP32.c"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp32/esp32-mt-spi.c"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/stm32f4/driversSTM32F4.c"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/stm32f1/driversSTM32F1.c"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/MoToButtons.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/MobaTools.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/MoToTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/avr/drivers.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/avr/MoToAVR.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp32/drivers.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp32/esp32-mt-spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp32/MoToESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToSoftled.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToDbg.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/utilities/MoToPwm.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/stm32f4/drivers.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/stm32f4/MoToSTM32F4.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/stm32f1/drivers.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/stm32f1/MoToSTM32F1.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp8266/drivers.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp8266/MoToESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src/esp8266/ESP8266_waveform.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/examples/_Stepper/ESP32-Web/website.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/examples/_Stepper/TestStepRampCom/readCommands.h"
  "${CMAKE_CURRENT_LIST_DIR}/MobaTools/examples/_Stepper/TestStepRampCom/debugdefs.h"
)

target_include_directories(mobatools INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MobaTools/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mobatools INTERFACE
    arduino-compat
)
