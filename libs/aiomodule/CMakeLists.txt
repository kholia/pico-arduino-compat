add_library(aiomodule INTERFACE)

target_sources(aiomodule INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/AIOModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/socketIOClient/SocketIO_Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/socketIOClient/SIOCommnuicationChannel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/communicationChannel/CommunicationEvents.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/state/AIOState.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/command/AIOCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/AIOModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/socketIOClient/SocketIO_Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/socketIOClient/SIOCommnuicationChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/communicationChannel/CommunicationEvents.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/communicationChannel/CommunicationChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/state/AIOState.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src/command/AIOCommand.h"
)

target_include_directories(aiomodule INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AIO-module-nodemcu-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(aiomodule INTERFACE
    arduino-compat
)
