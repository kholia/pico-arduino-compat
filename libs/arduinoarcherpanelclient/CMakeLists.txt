add_library(arduinoarcherpanelclient INTERFACE)

target_sources(arduinoarcherpanelclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/ElementClickEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/SetVariableCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/AuthenticateCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/UserValueInputEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/PanelCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/PanelEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/AuthenticateResponseEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/ObservePanelsCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/KeepAliveCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/ArduinoArcherPanelClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/SetVariableCommand.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/PanelCommand.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/AuthenticateResponseEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/AuthenticateCommand.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/ElementClickEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/ObservePanelsCommand.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/KeepAliveCommand.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/UserValueInputEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src/PanelEvent.h"
)

target_include_directories(arduinoarcherpanelclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoArcherPanelClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinoarcherpanelclient INTERFACE
    arduino-compat
)
