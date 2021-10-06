add_library(can INTERFACE)

target_sources(can INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/MCP2515.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/ESP32SJA1000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/CANController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/CAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/ESP32SJA1000.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/CANController.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src/MCP2515.h"
)

target_include_directories(can INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-CAN/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(can INTERFACE
    arduino-compat
)
