add_library(rcreceiver INTERFACE)

target_sources(rcreceiver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RCReceiver/RCReceive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RCReceiver/makros.h"
  "${CMAKE_CURRENT_LIST_DIR}/RCReceiver/RCReceive.h"
  "${CMAKE_CURRENT_LIST_DIR}/RCReceiver/debug.h"
)

target_include_directories(rcreceiver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RCReceiver"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rcreceiver INTERFACE
    arduino-compat
)
