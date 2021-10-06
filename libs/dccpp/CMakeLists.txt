add_library(dccpp INTERFACE)

target_sources(dccpp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/VStudio/ArduinoIno.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/Turnout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/CurrentMonitor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/DccSignalUno.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/DCCpp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/PacketRegister.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/DccSignalESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/TextCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/Outputs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/EEStore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/DCCpp.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/DCCpp_Uno.h"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/CurrentMonitor.h"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/Outputs.h"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/Comm.h"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/DCCpp.h"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/EEStore.h"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/Turnout.h"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/TextCommand.h"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src/PacketRegister.h"
)

target_include_directories(dccpp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DCCpp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dccpp INTERFACE
    arduino-compat
)
