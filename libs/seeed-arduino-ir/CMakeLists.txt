add_library(seeed-arduino-ir INTERFACE)

target_sources(seeed-arduino-ir INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibSAMD21.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibSAMD51.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibRecv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibRecvLoop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibProtocols.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibRecvPCI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibFreq.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibRecvBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibDecodeBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibSendBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibHardware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P07_NECx.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibRecv.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibRecvPCI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibHardware.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibDecodeBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P03_RC5.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P08_Samsung36.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibProtocols.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P05_Panasonic_Old.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibCombo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P10_DirecTV.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibRecvBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibRecvLoop.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibSAMD51.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibFreq.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P11_RCMM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibSendBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_HashRaw.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibSAMD21.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P12_CYKM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibAll.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P02_Sony.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P99_Additional.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P06_JVC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P09_GICable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P01_NEC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLibGlobals.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src/IRLib_P04_RC6.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/examples/Iot_IR/IoT_IR/WiFi101_Util.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/examples/Iot_IR/IoT_IR/arduino_secrets.h"
)

target_include_directories(seeed-arduino-ir INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_IR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(seeed-arduino-ir INTERFACE
    arduino-compat
)
