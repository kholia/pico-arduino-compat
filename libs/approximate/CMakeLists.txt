add_library(approximate INTERFACE)

target_sources(approximate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/Channel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/PacketSniffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/ArpTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/Filter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/Device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate.h"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/wifi_pkt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/ArpTable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/PacketSniffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/Device.h"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/Filter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/Packet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/eth_addr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Approximate/src/Approximate/Channel.h"
)

target_include_directories(approximate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Approximate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(approximate INTERFACE
    arduino-compat
)
