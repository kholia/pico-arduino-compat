add_library(pac-remotedebug INTERFACE)

target_sources(pac-remotedebug INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/RemoteDebug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/RemoteDebugWS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/WebSockets.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/WebSocketsClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/WebSocketsServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/libb64/cencode.c"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/libb64/cdecode.c"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/libsha1/libsha1.c"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/RemoteDebugWS.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/telnet.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/RemoteDebugCfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/RemoteDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/WebSocketsServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/WebSockets.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/WebSocketsClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/libb64/cencode_inc.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/libb64/cdecode_inc.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src/utility/libsha1/libsha1.h"
)

target_include_directories(pac-remotedebug INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RemoteDebug/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-remotedebug INTERFACE
    arduino-compat
)
