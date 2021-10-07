add_library(pac-remoteme INTERFACE)

target_sources(pac-remoteme INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src/Variables.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src/RemoteMe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src/RemoteMeSocketConnector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src/RemoteMeMessagesUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src/RemoteMeSocketConnector.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src/RemoteMe.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src/RemoteMeConnector.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src/RemoteMeDirectConnector.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src/RemoteMeMessagesUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src/Variables.h"
)

target_include_directories(pac-remoteme INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-remoteme INTERFACE
    arduino-compat
)
