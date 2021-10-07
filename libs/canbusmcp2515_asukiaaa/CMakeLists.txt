add_library(pac-canbusmcp2515_asukiaaa INTERFACE)

target_sources(pac-canbusmcp2515_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src/CanBusMCP2515_asukiaaa/Settings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src/CanBusMCP2515_asukiaaa/Frame.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src/CanBusMCP2515_asukiaaa/Driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src/CanBusMCP2515_asukiaaa.h"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src/MCP2515ReceiveFilters.h"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src/ACANBuffer16.h"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src/ACANBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src/CanBusMCP2515_asukiaaa/Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src/CanBusMCP2515_asukiaaa/Frame.h"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src/CanBusMCP2515_asukiaaa/Driver.h"
)

target_include_directories(pac-canbusmcp2515_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CanBusMCP2515-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-canbusmcp2515_asukiaaa INTERFACE
    arduino-compat
)
