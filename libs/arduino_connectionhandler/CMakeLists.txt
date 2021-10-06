add_library(arduino_connectionhandler INTERFACE)

target_sources(arduino_connectionhandler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src/Arduino_GSMConnectionHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src/Arduino_NBConnectionHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src/Arduino_WiFiConnectionHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src/Arduino_ConnectionHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src/Arduino_LoRaConnectionHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src/Arduino_NBConnectionHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src/Arduino_LoRaConnectionHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src/Arduino_ConnectionHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src/Arduino_WiFiConnectionHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src/Arduino_GSMConnectionHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/examples/ConnectionHandlerDemo/arduino_secrets.h"
)

target_include_directories(arduino_connectionhandler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_ConnectionHandler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_connectionhandler INTERFACE
    arduino-compat
)
