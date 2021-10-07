add_library(pac-arduinoserialtotcpbridgeclient INTERFACE)

target_sources(pac-arduinoserialtotcpbridgeclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSerialToTCPBridgeClient/src/ArduinoSerialToTCPBridgeClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSerialToTCPBridgeClient/src/ArduinoSerialToTCPBridgeClient.h"
)

target_include_directories(pac-arduinoserialtotcpbridgeclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoSerialToTCPBridgeClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinoserialtotcpbridgeclient INTERFACE
    arduino-compat
)
