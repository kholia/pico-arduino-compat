add_library(pac-openlcb_single_thread INTERFACE)

target_sources(pac-openlcb_single_thread INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/Tiva/tivacan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/Tiva/TivaCANv0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/ESP32/ESPcan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/ESP32/ESP32can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/AT90/AT90can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/AT90/CanBus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/OlcbCanInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/SNII.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/OlcbEthInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/ButtonLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/PIP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/OpenLcbCanBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/BG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/NodeMemory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/OpenLcbCore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/EventID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/Event.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/Datagram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/LinkControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/OlcbStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonCAN/Configuration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/Mock/mockCan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/MCP2515/MCPcan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/MCP2515/MCP2515can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/TeensyARM/FlexCANv1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/TeensyARM/flexcan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/examples/Tiva123-8Out-8In-16BoD-16Servo/Tiva123_Adafruit_PWMServoDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/MCP2515/spi.c"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCan.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/BG.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OpenLCBHeader.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/NodeMemory.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/LinkControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/ButtonLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/PIP.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OpenLcbCanBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCanInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbNet.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/SNII.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbEthInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/Event.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/NodeID.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/Configuration.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/EventID.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OpenLcbCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/Datagram.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/processor.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OpenLcbCan.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OpenLCBMid.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/lib_debug_print_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbCommonVersion.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/OlcbIncludes.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/Tiva/tivaeeprom.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/Tiva/TivaCANv0.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/Tiva/tivacan.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/ESP32/ESPeeprom.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/ESP32/ESPcan.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/ESP32/ESP32can.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/AT90/AT90can.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/AT90/CanBus.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/Mock/mockCan.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/MCP2515/spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/MCP2515/utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/MCP2515/mcp2515_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/MCP2515/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/MCP2515/MCP2515can.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/MCP2515/MCPcan.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/BluePill/bpeeprom.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/TeensyARM/FlexCANv1.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/TeensyARM/flexcan.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src/TeensyARM/kinetis_flexcan.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/examples/OlcbIoNode/boardTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/examples/Tiva123-8Out-8In-16BoD-16Servo/Tiva123_Adafruit_PWMServoDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/examples/OlcbBasicNode/boardChoices.h"
)

target_include_directories(pac-openlcb_single_thread INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OpenLCB_Single_Thread/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-openlcb_single_thread INTERFACE
    arduino-compat
)
