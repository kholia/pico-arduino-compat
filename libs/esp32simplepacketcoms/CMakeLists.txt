add_library(esp32simplepacketcoms INTERFACE)

target_sources(esp32simplepacketcoms INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Esp32SimplePacketComs/src/device/UDPSimplePacketComs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Esp32SimplePacketComs/src/device/UdpNameSearch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Esp32SimplePacketComs/src/server/UDPSimplePacket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Esp32SimplePacketComs/src/server/NameCheckerServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Esp32SimplePacketComs/src/device/UDPSimplePacketComs.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Esp32SimplePacketComs/src/Esp32SimplePacketComs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Esp32SimplePacketComs/src/device/UdpNameSearch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Esp32SimplePacketComs/src/server/UDPSimplePacket.h"
  "${CMAKE_CURRENT_LIST_DIR}/Esp32SimplePacketComs/src/server/NameCheckerServer.h"
)

target_include_directories(esp32simplepacketcoms INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Esp32SimplePacketComs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32simplepacketcoms INTERFACE
    arduino-compat
)
