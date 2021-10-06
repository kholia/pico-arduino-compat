add_library(reactorprotocol INTERFACE)

target_sources(reactorprotocol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/src/BluetoothClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/src/FreqCounter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/src/BluetoothMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/src/ReactorProtocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/examples/bluetoothtest/.ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/examples/StudentReactorControl/Messages.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/examples/StudentReactorControl/BTComms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/src/BluetoothClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/src/ReactorProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/src/BluetoothMaster.h"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/src/FreqCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/examples/StudentReactorControl/Messages.h"
  "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/examples/StudentReactorControl/BTComms.h"
)

target_include_directories(reactorprotocol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ReactorProtocol/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(reactorprotocol INTERFACE
    arduino-compat
)
