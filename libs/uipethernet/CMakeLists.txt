add_library(pac-uipethernet INTERFACE)

target_sources(pac-uipethernet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/UIPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/UIPServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/Dhcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/UIPUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/Dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/mempool.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/IPAddress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/WString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/millis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/Print.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/uip_arp.c"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/uip.c"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/dtostrf.c"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/itoa.c"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/Dhcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/Dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/UIPServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/ethernet_comp.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/UIPUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/UIPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/mempool.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/uipethernet-conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/mempool_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/logging.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/uip.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/uipopt.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/uip_arch.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/uip_arp.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/uip-conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/utility/enc28j60.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/Print.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/Printable.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/WString.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/IPAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/dtostrf.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/itoa.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/pgmspace.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/millis.h"
  "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet/mbed/Server.h"
)

target_include_directories(pac-uipethernet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UIPEthernet"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-uipethernet INTERFACE
    arduino-compat
)
