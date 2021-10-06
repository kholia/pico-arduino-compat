add_library(remotemeutils INTERFACE)

target_sources(remotemeutils INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibraryUtils/src/RemoteMeDirectWebSocketConnector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibraryUtils/src/RemoteMeWebSocketConnector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibraryUtils/src/RemoteMeDirectWebSocketConnector.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibraryUtils/src/RemoteMeWebSocketConnector.h"
)

target_include_directories(remotemeutils INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RemoteMeArduinoLibraryUtils/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(remotemeutils INTERFACE
    arduino-compat
)
