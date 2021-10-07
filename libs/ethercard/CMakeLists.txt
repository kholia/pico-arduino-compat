add_library(pac-ethercard INTERFACE)

target_sources(pac-ethercard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/dhcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/EtherCard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/udpserver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/webutil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/stash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/enc28j60.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/tcpip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/bufferfiller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/net.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/bufferfiller.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/EtherCard.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/stash.h"
  "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src/enc28j60.h"
)

target_include_directories(pac-ethercard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EtherCard/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ethercard INTERFACE
    arduino-compat
)
