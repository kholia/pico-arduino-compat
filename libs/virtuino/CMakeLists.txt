add_library(pac-virtuino INTERFACE)

target_sources(pac-virtuino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/virtuino/VirtuinoEsp8266_WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino/VirtuinoBluetooth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino/VirtuinoEthernet_WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino/VirtuinoEthernet_WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino/VirtuinoEsp8266_WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino/VirtuinoBluetooth.h"
)

target_include_directories(pac-virtuino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/virtuino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-virtuino INTERFACE
    arduino-compat
)
