add_library(pac-rcreceiver INTERFACE)

target_sources(pac-rcreceiver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RCReceiver/RCReceive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RCReceiver/makros.h"
  "${CMAKE_CURRENT_LIST_DIR}/RCReceiver/RCReceive.h"
  "${CMAKE_CURRENT_LIST_DIR}/RCReceiver/debug.h"
)

target_include_directories(pac-rcreceiver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RCReceiver"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rcreceiver INTERFACE
    arduino-compat
)
