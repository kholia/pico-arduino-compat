add_library(thethingsnode INTERFACE)

target_sources(thethingsnode INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/PinChangeInterrupt3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/PinChangeInterrupt1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/TheThingsNode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/PinChangeInterrupt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/PinChangeInterrupt0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/PinChangeInterrupt2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/Hackscribble_MCP9804.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/PinChangeInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/PinChangeInterruptBoards.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/TheThingsNode.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/PinChangeInterruptSettings.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/Hackscribble_MCP9804.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src/PinChangeInterruptPins.h"
)

target_include_directories(thethingsnode INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-node-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thethingsnode INTERFACE
    arduino-compat
)
