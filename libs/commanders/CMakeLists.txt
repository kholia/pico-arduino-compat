add_library(commanders INTERFACE)

target_sources(commanders INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/ButtonsCommanderKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/pch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/ArduinoIno.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/DccCommander.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/Commanders.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/DccCommanderNMRA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/NmraDcc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/EventsSequencer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/Commander.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderSwitchTwoPins.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/I2CCommander.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/DCC_Decoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderPush.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/TextInterpreter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/CANCommander.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderAnalogPushes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommander.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderPotentiometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderAnalogPushesItem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/EventStack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderSwitchOnePin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/ButtonsCommanderKeyboard.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/DCC_Decoder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderAnalogPushes.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderSwitch.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/EventStack.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/DccCommanderNMRA.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/Commander.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/SerialCommander.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderEncoder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/DCC_Decoder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderPotentiometer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderSwitchOnePin.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/DccCommander.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/CANCommander.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/Chain.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/TextInterpreter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderButton.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderPush.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/I2CCommander.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderSwitchTwoPins.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/EventsSequencer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommanderAnalogPushesItem.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/ButtonsCommander.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/Commanders.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/Commanders.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/mcp_can.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/NmraDcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/pch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/VStudio/mcp_can_dfs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/extras/travis/Commanders.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/extras/travis/DccCommander_Commanders.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/Commanders.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/NmraDcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commanders/src/Events.h"
)

target_include_directories(commanders INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Commanders/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(commanders INTERFACE
    arduino-compat
)
