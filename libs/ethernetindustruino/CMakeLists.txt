add_library(pac-ethernetindustruino INTERFACE)

target_sources(pac-ethernetindustruino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/EthernetClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/EthernetUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/EthernetIndustruino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/Dhcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/Dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/Twitter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/utility/w5200.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/utility/socket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/utility/w5500.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/Dhcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/EthernetUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/util.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/EthernetIndustruino.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/Dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/EthernetClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/Twitter.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/EthernetServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/utility/w5200.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/utility/w5500.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src/utility/socket.h"
)

target_include_directories(pac-ethernetindustruino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EthernetIndustruino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ethernetindustruino INTERFACE
    arduino-compat
)
