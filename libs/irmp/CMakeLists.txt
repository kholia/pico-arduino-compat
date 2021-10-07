add_library(pac-irmp INTERFACE)

target_sources(pac-irmp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/AllProtocols/ADCUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/IRFeedbackLED.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/TinyIRReceiver.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irsndArduinoExt.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpPinChangeInterrupt.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmp.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/IRTimer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irsnd.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpprotocols.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpArduinoExt.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/IRDispatcherDemo/IRCommandDispatcher.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpprotocols.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irsndSelectMain15Protocols.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmp.c.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irsndconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irsnd.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/TinyIRReceiver.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/IRTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpSelectAllRFProtocols.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irsnd.c.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irsndArduinoExt.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpArduinoExt.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpVersion.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/IRFeedbackLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/LongUnion.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irsndSelectAllProtocols.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/digitalWriteFast.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpSelectAllProtocols.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpsystem.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/src/irmpSelectMain15Protocols.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/SendAllProtocols/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/ReceiveAndSendDynamicPins/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/IRDispatcherDemo/IRCommandMapping.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/IRDispatcherDemo/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/IRDispatcherDemo/IRCommandDispatcher.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/OneProtocol/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/SimpleSender/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/AllProtocols/ADCUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/AllProtocols/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/RFProtocols/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/ReceiveAndSend/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/SimpleReceiver/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/Interrupt/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRMP/examples/Callback/PinDefinitionsAndMore.h"
)

target_include_directories(pac-irmp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IRMP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-irmp INTERFACE
    arduino-compat
)
