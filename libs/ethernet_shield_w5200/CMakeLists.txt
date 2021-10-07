add_library(pac-ethernet_shield_w5200 INTERFACE)

target_sources(pac-ethernet_shield_w5200 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/DhcpV2_0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/EthernetV2_0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/EthernetServerV2_0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/DnsV2_0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/EthernetClientV2_0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/EthernetUdpV2_0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/utility/w5200.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/utility/socketV2_0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/EthernetServerV2_0.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/DnsV2_0.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/utilV2_0.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/EthernetUdpV2_0.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/DhcpV2_0.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/EthernetV2_0.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/EthernetClientV2_0.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/utility/socketV2_0.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200/utility/w5200.h"
)

target_include_directories(pac-ethernet_shield_w5200 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ethernet_Shield_W5200"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ethernet_shield_w5200 INTERFACE
    arduino-compat
)
