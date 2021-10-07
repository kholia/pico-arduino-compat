add_library(pac-can-adafruit-fork INTERFACE)

target_sources(pac-can-adafruit-fork INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/MCP2515.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/CANSAME5x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/ESP32SJA1000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/CANController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/CAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/CANSAME5x.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/ESP32SJA1000.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/CANController.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/MCP2515.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/CANSAME5x_port.h"
)

target_include_directories(pac-can-adafruit-fork INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-can-adafruit-fork INTERFACE
    arduino-compat
)
