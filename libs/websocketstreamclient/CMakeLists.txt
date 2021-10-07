add_library(pac-websocketstreamclient INTERFACE)

target_sources(pac-websocketstreamclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WebSocketStreamClient/WebSocketClient250.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSocketStreamClient/WebSocketStreamClient.h"
)

target_include_directories(pac-websocketstreamclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WebSocketStreamClient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-websocketstreamclient INTERFACE
    arduino-compat
)
