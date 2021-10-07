add_library(pac-stm32duino-s2-lp INTERFACE)

target_sources(pac-stm32duino-s2-lp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Timer_ex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Gpio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Commands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Fifo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_PktStack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Types.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Csma.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_PktBasic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Qi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_General.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_PacketHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_PktWMbus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Radio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Timer_ex.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_PktStack.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Regs.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_PktWMbus.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Fifo.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_PktBasic.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_PacketHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Csma.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Qi.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_General.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Commands.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Radio.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP_Gpio.h"
  "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src/S2LP.h"
)

target_include_directories(pac-stm32duino-s2-lp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/S2-LP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-s2-lp INTERFACE
    arduino-compat
)
