add_library(pac-acan2515tiny INTERFACE)

target_sources(pac-acan2515tiny INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/acan2515Tiny/src/ACAN2515TinySettings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515Tiny/src/ACAN2515Tiny.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515Tiny/src/ACANBuffer8.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515Tiny/src/ACAN2515Tiny.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515Tiny/src/MCP2515ReceiveFilters.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515Tiny/src/ACAN2515TinySettings.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2515Tiny/src/CANMessage.h"
)

target_include_directories(pac-acan2515tiny INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/acan2515Tiny/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acan2515tiny INTERFACE
    arduino-compat
)
