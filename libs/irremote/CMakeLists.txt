add_library(irremote INTERFACE)

target_sources(irremote INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_Denon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_Lego.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_NEC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_JVC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_Template.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_BoseWave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_DistanceProtocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_RC5_RC6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_Whynter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_Sony.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_Dish.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_Kaseikyo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_Samsung.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_MagiQuest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ac_LG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_LG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ir_Pronto.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/IRFeedbackLED.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/TinyIRReceiver.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/IRReceive.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/IRSend.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/private/IRTimer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/IRDispatcherDemo/IRCommandDispatcher.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/IRremote.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/IRProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/TinyIRReceiver.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/IRremoteInt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/ac_LG.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/LongUnion.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/digitalWriteFast.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src/private/IRFeedbackLEDDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/SendRawDemo/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/ControlRelay/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/ReceiveDump/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/IRDispatcherDemo/IRCommandMapping.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/IRDispatcherDemo/IRCommandDispatcher.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/SendProntoDemo/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/SimpleSender/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/SendBoseWaveDemo/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/IRremoteExtensionTest/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/IRremoteExtensionTest/IRremoteExtensionClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/ReceiveDemo/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/ReceiveAndSend/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/SendDemo/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/SendAndReceive/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/SendLGAirConditionerDemo/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/UnitTest/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/examples/SimpleReceiver/PinDefinitionsAndMore.h"
)

target_include_directories(irremote INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-IRremote/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(irremote INTERFACE
    arduino-compat
)
