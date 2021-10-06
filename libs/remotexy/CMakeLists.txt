add_library(remotexy INTERFACE)

target_sources(remotexy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYComm_AT.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXY.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYStream_BLEPeripheral.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYApi.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYComm_ESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYCloudServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYConnectionCloud.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYComm.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYComm_Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYStream_BluetoothSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYStream_SoftSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYStream_BLEDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYWireStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYStream_HardSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYComm_WiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYStream_CDCSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYConnection.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYFunc.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYConnectionStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYConnectionServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYWireCloud.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYDebugLog.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYThread.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src/RemoteXYApiData.h"
)

target_include_directories(remotexy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RemoteXY-Arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(remotexy INTERFACE
    arduino-compat
)
