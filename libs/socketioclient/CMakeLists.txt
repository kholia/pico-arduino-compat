add_library(pac-socketioclient INTERFACE)

target_sources(pac-socketioclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/socket.io-client/SocketIoClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/socket.io-client/SocketIoClient.h"
)

target_include_directories(pac-socketioclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/socket.io-client"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-socketioclient INTERFACE
    arduino-compat
)
