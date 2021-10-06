add_library(socketioclient INTERFACE)

target_sources(socketioclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/socket.io-client/SocketIoClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/socket.io-client/SocketIoClient.h"
)

target_include_directories(socketioclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/socket.io-client"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(socketioclient INTERFACE
    arduino-compat
)
