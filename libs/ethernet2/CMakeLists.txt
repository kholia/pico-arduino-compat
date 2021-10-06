add_library(ethernet2 INTERFACE)

target_sources(ethernet2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/EthernetClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/Dhcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/Dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/Ethernet2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/Twitter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/EthernetUdp2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/utility/socket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/utility/w5500.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/Dhcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/util.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/Dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/EthernetClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/EthernetUdp2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/Twitter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/EthernetServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/Ethernet2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/utility/util.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/utility/w5500.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src/utility/socket.h"
)

target_include_directories(ethernet2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ethernet2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ethernet2 INTERFACE
    arduino-compat
)
