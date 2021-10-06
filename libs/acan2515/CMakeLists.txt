add_library(acan2515 INTERFACE)

target_sources(acan2515 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/acan2515/src/ACAN2515Settings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515/src/ACAN2515.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515/src/ACAN2515.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515/src/MCP2515ReceiveFilters.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515/src/ACAN2515Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515/src/ACANBuffer16.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515/src/ACANBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515/src/CANMessage.h"
)

target_include_directories(acan2515 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/acan2515/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(acan2515 INTERFACE
    arduino-compat
)
