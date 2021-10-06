add_library(totem-library INTERFACE)

target_sources(totem-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/Totem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/ble/TotemCANService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/Totem.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/lib/LinkedObservers.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/lib/ModuleControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/lib/ModuleList.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/lib/TotemNetwork.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/InterfaceBLE.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/InterfaceX4.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/x4/TotemX4.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/ble/TotemRobotInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/ble/CanPacket.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/ble/TotemBLENetwork.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/ble/TotemCANbus.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/ble/TotemCANService.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/ble/ByteBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/interfaces/ble/RemoteRobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/core/TotemBUSProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/core/TotemBUS.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/api/ModuleData.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/api/MotorDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/api/TotemModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src/api/TotemRobot.h"
)

target_include_directories(totem-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TotemArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(totem-library INTERFACE
    arduino-compat
)
