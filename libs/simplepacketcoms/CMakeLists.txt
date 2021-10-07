add_library(pac-simplepacketcoms INTERFACE)

target_sources(pac-simplepacketcoms INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimplePacketComs/src/PacketEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimplePacketComs/src/SimplePacketComs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimplePacketComs/src/client/PacketType.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimplePacketComs/src/client/AbstractSimpleComsDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimplePacketComs/src/SimplePacketComs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplePacketComs/src/PacketEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplePacketComs/src/client/IPacketResponseEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplePacketComs/src/client/AbstractPacketType.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimplePacketComs/src/client/AbstractSimpleComsDevice.h"
)

target_include_directories(pac-simplepacketcoms INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimplePacketComs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplepacketcoms INTERFACE
    arduino-compat
)
