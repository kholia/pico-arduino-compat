add_library(rtt-ethernet INTERFACE)

target_sources(rtt-ethernet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/EthernetClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/RttEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/EthernetUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/utility/stm32_eth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/utility/ethernetif.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/utility/queue.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipHttp/fsdata_custom.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipHttp/http_client.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipHttp/fs.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipHttp/fsdata.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipHttp/httpd.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipHttp/altcp_proxyconnect.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipHttp/makefsdata/makefsdata.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipIperf/lwiperf.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipSocket/socket_examples.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/EthernetUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/lwipopts.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/EthernetClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/lwippools.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/lwipopts_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/RttEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/EthernetServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/utility/queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/utility/ethernetif.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src/utility/stm32_eth.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipHttp/httpd_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipHttp/fsdata.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipHttp/makefsdata/tinydir.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/TelnetClient/user_cmd.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/examples/LwipSocket/socket_examples.h"
)

target_include_directories(rtt-ethernet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTT-Ethernet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtt-ethernet INTERFACE
    arduino-compat
)
