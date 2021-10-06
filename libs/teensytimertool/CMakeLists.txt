add_library(teensytimertool INTERFACE)

target_sources(teensytimertool INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/baseTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/ErrorHandling/error_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Uno-dummy/TCK/TCK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/ESP32-dummy/TCK/TCK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/TCK/TCK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/PIT4/PIT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/examples/99_Misc/PinInformation/PWM_TimerInfo.c"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/frequency.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/baseTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/defaultConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/periodicTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/oneShotTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/TeensyTimerTool.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/ITimerChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/boardDef.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/ErrorHandling/error_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/ErrorHandling/error_codes.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Uno-dummy/TCK/TckChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Uno-dummy/TCK/TCK.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/ESP32-dummy/TCK/TckChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/ESP32-dummy/TCK/TCK.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/TMR/TMRChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/TMR/TMR.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/GPT/GPTChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/GPT/GPTmap.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/GPT/GPT.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/FTM/FTM_Channel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/FTM/FTM_Info.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/FTM/FTM_ChannelInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/FTM/FTM.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/TCK/TckChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/TCK/TCK.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/TCK/TckChannelBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/PIT4/PITChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/PIT4/PITMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src/Teensy/PIT4/PIT.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/examples/03_Applications/DoubleExposure/PulseGenerator.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/examples/03_Applications/DoubleExposure/SystemController.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/examples/03_Applications/DoubleExposure/LaserController.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/examples/99_Misc/PinInformation/PinInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/examples/99_Misc/PinInformation/PWM_TimerInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/examples/99_Misc/PinInformation/GPIO_Info.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/examples/02_Advanced/UsingLambdas/pins.h"
)

target_include_directories(teensytimertool INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TeensyTimerTool/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(teensytimertool INTERFACE
    arduino-compat
)
