add_library(pac-fastble INTERFACE)

target_sources(pac-fastble INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/src/FastBle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/extras/nina-src/main/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/extras/nina-src/main/ble_backend.c"
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/extras/nina-src/main/ble_connection.c"
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/extras/nina-src/main/uart_to_host.c"
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/extras/nina-src/main/ble_backend.h"
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/extras/nina-src/main/ble_connection.h"
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/extras/nina-src/main/uart_to_host.h"
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/src/FastBLE.h"
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/src/protocol/protocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/src/protocol/ble_uuid.h"
)

target_include_directories(pac-fastble INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nina-fast-bluetooth/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fastble INTERFACE
    arduino-compat
)
