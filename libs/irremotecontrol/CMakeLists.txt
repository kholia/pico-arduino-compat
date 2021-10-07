add_library(pac-irremotecontrol INTERFACE)

target_sources(pac-irremotecontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IRRemoteControl/IRRemoteControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRRemoteControl/IRRemoteControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRRemoteControl/IRRemoteControlInt.h"
)

target_include_directories(pac-irremotecontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IRRemoteControl"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-irremotecontrol INTERFACE
    arduino-compat
)
