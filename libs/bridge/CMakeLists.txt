add_library(pac-bridge INTERFACE)

target_sources(pac-bridge INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/Mailbox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/Console.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/Bridge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/BridgeSSLClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/FileIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/BridgeClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/BridgeServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/Process.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/BridgeUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/HttpClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/YunClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/HttpClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/Bridge.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/BridgeUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/YunServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/Mailbox.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/Process.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/BridgeClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/BridgeSSLClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/BridgeServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/Console.h"
  "${CMAKE_CURRENT_LIST_DIR}/Bridge/src/FileIO.h"
)

target_include_directories(pac-bridge INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Bridge/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bridge INTERFACE
    arduino-compat
)
