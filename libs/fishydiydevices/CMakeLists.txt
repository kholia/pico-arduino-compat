add_library(fishydiydevices INTERFACE)

target_sources(fishydiydevices INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/fishyDIYdevices/src/fishyDevices.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/fishyDIYdevices/extras/FD-TEMPLATE.h"
  "${CMAKE_CURRENT_LIST_DIR}/fishyDIYdevices/src/fishyDevices.h"
  "${CMAKE_CURRENT_LIST_DIR}/fishyDIYdevices/examples/LimitSwitchActuator/FD-Limit-Switch-Actuator/FD-Limit-Switch-Actuator.h"
  "${CMAKE_CURRENT_LIST_DIR}/fishyDIYdevices/examples/LimitSwitchActuator/FD-Limit-Switch-Actuator/FD-Device-Definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/fishyDIYdevices/examples/SimpleSwitch/FD-Simple-Switch/FD-Device-Definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/fishyDIYdevices/examples/SimpleSwitch/FD-Simple-Switch/FD-Simple-Switch.h"
)

target_include_directories(fishydiydevices INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/fishyDIYdevices/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fishydiydevices INTERFACE
    arduino-compat
)
