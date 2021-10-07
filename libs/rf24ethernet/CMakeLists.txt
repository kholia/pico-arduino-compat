add_library(pac-rf24ethernet INTERFACE)

target_sources(pac-rf24ethernet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/RF24Server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/RF24Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/Dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/RF24Udp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/RF24Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip_debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/clock-arch.c"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip_arp.c"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/timer.c"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/psock.c"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/slipdev.c"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip-neighbor.c"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip-split.c"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uiplib.c"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip.c"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip-fw.c"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/RF24Ethernet_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/RF24Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/RF24Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/RF24Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/Dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/ethernet_comp.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/RF24Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/uip-conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/clock-arch.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/examples/TAP/InteractiveServer/HTML.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/examples/InteractiveServer_Mesh/HTML.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/examples/SLIP_InteractiveServer/HTML.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/examples/InteractiveServer_Mesh_ESPWifi/HTML.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip-neighbor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/pt.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip-split.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip_clock.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/clock.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/util.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/lc-addrlabels.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/lc.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uipopt.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip-fw.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip_arch.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/slipdev.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip_debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/lc-switch.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uip_arp.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/uiplib.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet/utility/psock.h"
)

target_include_directories(pac-rf24ethernet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RF24Ethernet"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rf24ethernet INTERFACE
    arduino-compat
)
