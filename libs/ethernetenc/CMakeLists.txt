add_library(pac-ethernetenc INTERFACE)

target_sources(pac-ethernetenc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/EthernetClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/EthernetUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/Dhcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/Dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/mempool.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/uip_arp.c"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/uip.c"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/Dhcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/EthernetUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/Dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/EthernetClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/EthernetENC.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/EthernetServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/mempool.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/uipethernet-conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/mempool_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/util.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/uip.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/uipopt.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/uip_arch.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/uip_arp.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/uip-conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src/utility/enc28j60.h"
)

target_include_directories(pac-ethernetenc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EthernetENC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ethernetenc INTERFACE
    arduino-compat
)
