add_library(websocketstreamclient INTERFACE)

target_sources(websocketstreamclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WebSocketStreamClient/WebSocketClient250.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSocketStreamClient/WebSocketStreamClient.h"
)

target_include_directories(websocketstreamclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WebSocketStreamClient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(websocketstreamclient INTERFACE
    arduino-compat
)
