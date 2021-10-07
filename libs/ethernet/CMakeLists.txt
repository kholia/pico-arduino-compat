add_library(pac-ethernet INTERFACE)

target_sources(pac-ethernet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/EthernetClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/EthernetUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/socket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/Dhcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/Dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/Dhcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/EthernetUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/Dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/EthernetClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/EthernetServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src/utility/w5100.h"
)

target_include_directories(pac-ethernet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ethernet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ethernet INTERFACE
    arduino-compat
)
