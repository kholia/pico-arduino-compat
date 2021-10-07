add_library(pac-teensydmx INTERFACE)

target_sources(pac-teensydmx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/TeensyDMX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/LPUARTSendHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/UARTSendHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/Sender.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/LPUARTReceiveHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/Receiver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/UARTReceiveHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/util/IntervalTimerEx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/examples/TextPacketHandler/TextPacketHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/examples/SIPHandler/SIPHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/examples/USBProWidget/ReceiveHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/UARTSendHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/SendHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/Responder.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/ReceiveHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/TeensyDMX.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/LPUARTSendHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/UARTReceiveHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/LPUARTReceiveHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src/util/IntervalTimerEx.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/examples/TextPacketHandler/TextPacketHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/examples/SIPHandler/SIPHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/examples/USBProWidget/ReceiveHandler.h"
)

target_include_directories(pac-teensydmx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TeensyDMX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-teensydmx INTERFACE
    arduino-compat
)
